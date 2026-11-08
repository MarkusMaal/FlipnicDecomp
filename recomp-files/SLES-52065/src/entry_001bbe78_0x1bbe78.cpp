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

// Function: entry_001bbe78
// Address: 0x1bbe78 - 0x1bbeac
void entry_001bbe78_0x1bbe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbe78_0x1bbe78");
#endif

    switch (ctx->pc) {
        case 0x1bbe80u: goto label_1bbe80;
        case 0x1bbea4u: goto label_1bbea4;
        default: break;
    }

    ctx->pc = 0x1bbe78u;

    // 0x1bbe78: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BBE78u;
    SET_GPR_U32(ctx, 31, 0x1BBE80u);
    ctx->pc = 0x1BBE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE78u;
    // 0x1bbe7c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BBE78u, 0x1BBE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE80u;
label_1bbe80:
    // 0x1bbe80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bbe80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe84: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBE84u;
    {
        const bool branch_taken_0x1bbe84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe84) {
            ctx->pc = 0x1BBEACu;
            return;
        }
    }
    ctx->pc = 0x1BBE8Cu;
    // 0x1bbe8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbe94: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bbe98: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbe9c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BBEA4u);
    ctx->pc = 0x1BBEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBE9Cu;
    // 0x1bbea0: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBE9Cu, 0x1BBEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEA4u;
label_1bbea4:
    // 0x1bbea4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBEA4u;
    SET_GPR_U32(ctx, 31, 0x1BBEACu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBEA4u, 0x1BBEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEACu;
}
