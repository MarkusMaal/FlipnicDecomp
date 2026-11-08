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

// Function: entry_0016567c
// Address: 0x16567c - 0x1656c4
void entry_0016567c_0x16567c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016567c_0x16567c");
#endif

    ctx->pc = 0x16567cu;

    // 0x16567c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x165680: 0x2435021  addu        $t2, $s2, $v1
    ctx->pc = 0x165680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x165684: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x165684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165688: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x165688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16568c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x165690: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x165690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x165694: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x165694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165698: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x165698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16569c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1656a0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1656a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1656a4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1656a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1656a8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1656a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1656ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1656acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1656b0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1656b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x1656b4: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1656B4u;
    {
        const bool branch_taken_0x1656b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656B4u;
        // 0x1656b8: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656b4) {
            ctx->pc = 0x16575Cu;
            return;
        }
    }
    ctx->pc = 0x1656BCu;
    // 0x1656bc: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1656c0: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    ctx->pc = 0x1656c4u;
}
