#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0016575c
// Address: 0x16575c - 0x165798
void entry_0016575c_0x16575c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016575c_0x16575c");
#endif

    ctx->pc = 0x16575cu;

    // 0x16575c: 0x0  nop
    ctx->pc = 0x16575cu;
    // NOP
    // 0x165760: 0x1207000d  beq         $s0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x165760u;
    {
        const bool branch_taken_0x165760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x165764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165760u;
        // 0x165764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165760) {
            ctx->pc = 0x165798u;
            return;
        }
    }
    ctx->pc = 0x165768u;
    // 0x165768: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16576c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x165770: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x165774: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x165774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x165778: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x165778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16577c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x16577cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x165780: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x165780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x165784: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x165784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x165788: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x165788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16578c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x16578cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x165790: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x165790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x165794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x165798u;
}
