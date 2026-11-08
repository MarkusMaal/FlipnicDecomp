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

// Function: entry_00194328
// Address: 0x194328 - 0x194358
void entry_00194328_0x194328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194328_0x194328");
#endif

    switch (ctx->pc) {
        case 0x194340u: goto label_194340;
        default: break;
    }

    ctx->pc = 0x194328u;

    // 0x194328: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x19432c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x19432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x194330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x194334: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x194334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
    // 0x194338: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194338u;
    SET_GPR_U32(ctx, 31, 0x194340u);
    ctx->pc = 0x19433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194338u;
    // 0x19433c: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194338u, 0x194340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194340u;
label_194340:
    // 0x194340: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194344: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x194344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x194348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19434c: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x19434cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
    // 0x194350: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x194350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x194354: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x194354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    ctx->pc = 0x194358u;
}
