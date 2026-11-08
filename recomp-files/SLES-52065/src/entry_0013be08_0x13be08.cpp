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

// Function: entry_0013be08
// Address: 0x13be08 - 0x13be40
void entry_0013be08_0x13be08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013be08_0x13be08");
#endif

    switch (ctx->pc) {
        case 0x13be10u: goto label_13be10;
        case 0x13be34u: goto label_13be34;
        case 0x13be3cu: goto label_13be3c;
        default: break;
    }

    ctx->pc = 0x13be08u;

    // 0x13be08: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13BE08u;
    SET_GPR_U32(ctx, 31, 0x13BE10u);
    ctx->pc = 0x13BE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE08u;
    // 0x13be0c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13BE08u, 0x13BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE10u;
label_13be10:
    // 0x13be10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13be10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be14: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x13BE14u;
    {
        const bool branch_taken_0x13be14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE14u;
        // 0x13be18: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be14) {
            ctx->pc = 0x13BE40u;
            return;
        }
    }
    ctx->pc = 0x13BE1Cu;
    // 0x13be1c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13be20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13be20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13be24: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13be24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13be28: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13be2c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13BE2Cu;
    SET_GPR_U32(ctx, 31, 0x13BE34u);
    ctx->pc = 0x13BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE2Cu;
    // 0x13be30: 0x24a5ef90  addiu       $a1, $a1, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13BE2Cu, 0x13BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE34u;
label_13be34:
    // 0x13be34: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13BE34u;
    SET_GPR_U32(ctx, 31, 0x13BE3Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13BE34u, 0x13BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE3Cu;
label_13be3c:
    // 0x13be3c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x13be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x13be40u;
}
