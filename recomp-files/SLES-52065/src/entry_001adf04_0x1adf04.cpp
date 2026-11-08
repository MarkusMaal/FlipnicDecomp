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

// Function: entry_001adf04
// Address: 0x1adf04 - 0x1adf30
void entry_001adf04_0x1adf04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adf04_0x1adf04");
#endif

    ctx->pc = 0x1adf04u;

    // 0x1adf04: 0x260407a0  addiu       $a0, $s0, 0x7A0
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    // 0x1adf08: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADF08u;
    {
        const bool branch_taken_0x1adf08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF08u;
        // 0x1adf0c: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf08) {
            ctx->pc = 0x1ADF30u;
            return;
        }
    }
    ctx->pc = 0x1ADF10u;
    // 0x1adf10: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x1adf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
    // 0x1adf14: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADF14u;
    {
        const bool branch_taken_0x1adf14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF14u;
        // 0x1adf18: 0xae0207ac  sw          $v0, 0x7AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf14) {
            ctx->pc = 0x1ADF30u;
            return;
        }
    }
    ctx->pc = 0x1ADF1Cu;
    // 0x1adf1c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1adf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1adf20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1adf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf24: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1adf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1adf28: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ADF28u;
    SET_GPR_U32(ctx, 31, 0x1ADF30u);
    ctx->pc = 0x1ADF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF28u;
    // 0x1adf2c: 0xae0207ac  sw          $v0, 0x7AC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ADF28u, 0x1ADF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF30u;
}
