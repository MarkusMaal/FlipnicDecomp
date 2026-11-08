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

// Function: entry_00202598
// Address: 0x202598 - 0x2025c0
void entry_00202598_0x202598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202598_0x202598");
#endif

    ctx->pc = 0x202598u;

    // 0x202598: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x202598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20259c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20259Cu;
    {
        const bool branch_taken_0x20259c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20259Cu;
        // 0x2025a0: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20259c) {
            ctx->pc = 0x202624u;
            return;
        }
    }
    ctx->pc = 0x2025A4u;
    // 0x2025a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2025a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025a8: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2025a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2025ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2025acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2025b0: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2025b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2025b4: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2025b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2025b8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2025B8u;
    {
        const bool branch_taken_0x2025b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025B8u;
        // 0x2025bc: 0x2a61023  subu        $v0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025b8) {
            ctx->pc = 0x2025FCu;
            return;
        }
    }
    ctx->pc = 0x2025C0u;
}
