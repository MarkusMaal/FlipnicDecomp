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

// Function: entry_001a9a5c
// Address: 0x1a9a5c - 0x1a9ae0
void entry_001a9a5c_0x1a9a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9a5c_0x1a9a5c");
#endif

    switch (ctx->pc) {
        case 0x1a9ac4u: goto label_1a9ac4;
        case 0x1a9ad0u: goto label_1a9ad0;
        case 0x1a9adcu: goto label_1a9adc;
        default: break;
    }

    ctx->pc = 0x1a9a5cu;

    // 0x1a9a5c: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x1a9a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1a9a60: 0x27828100  addiu       $v0, $gp, -0x7F00
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934784));
    // 0x1a9a64: 0x24940770  addiu       $s4, $a0, 0x770
    ctx->pc = 0x1a9a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1904));
    // 0x1a9a68: 0xac800774  sw          $zero, 0x774($a0)
    ctx->pc = 0x1a9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1908), GPR_U32(ctx, 0));
    // 0x1a9a6c: 0x2801821  addu        $v1, $s4, $zero
    ctx->pc = 0x1a9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 0)));
    // 0x1a9a70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a9a74: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a9a78: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a9a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a9a7c: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x1a9a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9a80: 0xac800784  sw          $zero, 0x784($a0)
    ctx->pc = 0x1a9a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1924), GPR_U32(ctx, 0));
    // 0x1a9a84: 0xac800788  sw          $zero, 0x788($a0)
    ctx->pc = 0x1a9a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1928), GPR_U32(ctx, 0));
    // 0x1a9a88: 0xa080078c  sb          $zero, 0x78C($a0)
    ctx->pc = 0x1a9a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1932), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9a8c: 0xac800790  sw          $zero, 0x790($a0)
    ctx->pc = 0x1a9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1936), GPR_U32(ctx, 0));
    // 0x1a9a90: 0xac800794  sw          $zero, 0x794($a0)
    ctx->pc = 0x1a9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1940), GPR_U32(ctx, 0));
    // 0x1a9a94: 0xa0800798  sb          $zero, 0x798($a0)
    ctx->pc = 0x1a9a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1944), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9a98: 0xac80079c  sw          $zero, 0x79C($a0)
    ctx->pc = 0x1a9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1948), GPR_U32(ctx, 0));
    // 0x1a9a9c: 0xac8007a0  sw          $zero, 0x7A0($a0)
    ctx->pc = 0x1a9a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1952), GPR_U32(ctx, 0));
    // 0x1a9aa0: 0xa08007a4  sb          $zero, 0x7A4($a0)
    ctx->pc = 0x1a9aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1956), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9aa4: 0xac8007a8  sw          $zero, 0x7A8($a0)
    ctx->pc = 0x1a9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1960), GPR_U32(ctx, 0));
    // 0x1a9aa8: 0xac8007ac  sw          $zero, 0x7AC($a0)
    ctx->pc = 0x1a9aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1964), GPR_U32(ctx, 0));
    // 0x1a9aac: 0xa08007b0  sb          $zero, 0x7B0($a0)
    ctx->pc = 0x1a9aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1968), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9ab0: 0xac8007b4  sw          $zero, 0x7B4($a0)
    ctx->pc = 0x1a9ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 0));
    // 0x1a9ab4: 0xac8007b8  sw          $zero, 0x7B8($a0)
    ctx->pc = 0x1a9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 0));
    // 0x1a9ab8: 0xa08007bc  sb          $zero, 0x7BC($a0)
    ctx->pc = 0x1a9ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1980), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a9abc: 0xc046458  jal         func_119160
    ctx->pc = 0x1A9ABCu;
    SET_GPR_U32(ctx, 31, 0x1A9AC4u);
    ctx->pc = 0x1A9AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9ABCu;
    // 0x1a9ac0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A9ABCu, 0x1A9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AC4u;
label_1a9ac4:
    // 0x1a9ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a9ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ac8: 0xc069b8c  jal         func_1A6E30
    ctx->pc = 0x1A9AC8u;
    SET_GPR_U32(ctx, 31, 0x1A9AD0u);
    ctx->pc = 0x1A9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AC8u;
    // 0x1a9acc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E30u, 0x1A9AC8u, 0x1A9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AD0u;
label_1a9ad0:
    // 0x1a9ad0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ad4: 0xc069ba0  jal         func_1A6E80
    ctx->pc = 0x1A9AD4u;
    SET_GPR_U32(ctx, 31, 0x1A9ADCu);
    ctx->pc = 0x1A9AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9AD4u;
    // 0x1a9ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A9AD4u, 0x1A9ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9ADCu;
label_1a9adc:
    // 0x1a9adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a9adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9ae0u;
}
