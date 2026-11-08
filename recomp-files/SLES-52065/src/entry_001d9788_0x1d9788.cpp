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

// Function: entry_001d9788
// Address: 0x1d9788 - 0x1d97b0
void entry_001d9788_0x1d9788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9788_0x1d9788");
#endif

    ctx->pc = 0x1d9788u;

    // 0x1d9788: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D9788u;
    {
        const bool branch_taken_0x1d9788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9788u;
        // 0x1d978c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9788) {
            ctx->pc = 0x1D9828u;
            return;
        }
    }
    ctx->pc = 0x1D9790u;
    // 0x1d9790: 0x28620081  slti        $v0, $v1, 0x81
    ctx->pc = 0x1d9790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1d9794: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9794u;
    {
        const bool branch_taken_0x1d9794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9794u;
        // 0x1d9798: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9794) {
            ctx->pc = 0x1D97B0u;
            return;
        }
    }
    ctx->pc = 0x1D979Cu;
    // 0x1d979c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d97a0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D97A0u;
    {
        const bool branch_taken_0x1d97a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97A0u;
        // 0x1d97a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97a0) {
            ctx->pc = 0x1D9810u;
            return;
        }
    }
    ctx->pc = 0x1D97A8u;
    // 0x1d97a8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D97A8u;
    {
        const bool branch_taken_0x1d97a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97A8u;
        // 0x1d97ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97a8) {
            ctx->pc = 0x1D9888u;
            return;
        }
    }
    ctx->pc = 0x1D97B0u;
}
