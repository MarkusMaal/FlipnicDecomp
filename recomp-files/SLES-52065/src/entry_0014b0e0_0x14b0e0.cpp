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

// Function: entry_0014b0e0
// Address: 0x14b0e0 - 0x14b11c
void entry_0014b0e0_0x14b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b0e0_0x14b0e0");
#endif

    ctx->pc = 0x14b0e0u;

    // 0x14b0e0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14b0e4: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x14b0e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x14b0e8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14B0E8u;
    {
        const bool branch_taken_0x14b0e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B0E8u;
        // 0x14b0ec: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b0e8) {
            ctx->pc = 0x14B11Cu;
            return;
        }
    }
    ctx->pc = 0x14B0F0u;
    // 0x14b0f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14b0f4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x14b0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14b0f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b0fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b100: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b108: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14B108u;
    {
        const bool branch_taken_0x14b108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b108) {
            ctx->pc = 0x14B170u;
            return;
        }
    }
    ctx->pc = 0x14B110u;
    // 0x14b110: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b114: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14B114u;
    {
        const bool branch_taken_0x14b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B114u;
        // 0x14b118: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b114) {
            ctx->pc = 0x14B170u;
            return;
        }
    }
    ctx->pc = 0x14B11Cu;
}
