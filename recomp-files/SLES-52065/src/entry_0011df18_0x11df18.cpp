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

// Function: entry_0011df18
// Address: 0x11df18 - 0x11df70
void entry_0011df18_0x11df18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011df18_0x11df18");
#endif

    switch (ctx->pc) {
        case 0x11df28u: goto label_11df28;
        case 0x11df54u: goto label_11df54;
        case 0x11df64u: goto label_11df64;
        default: break;
    }

    ctx->pc = 0x11df18u;

    // 0x11df18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11df1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df20: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11DF20u;
    SET_GPR_U32(ctx, 31, 0x11DF28u);
    ctx->pc = 0x11DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF20u;
    // 0x11df24: 0x24c6e840  addiu       $a2, $a2, -0x17C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11DF20u, 0x11DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF28u;
label_11df28:
    // 0x11df28: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x11DF28u;
    {
        const bool branch_taken_0x11df28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF28u;
        // 0x11df2c: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df28) {
            ctx->pc = 0x11DFFCu;
            return;
        }
    }
    ctx->pc = 0x11DF30u;
    // 0x11df30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11df34: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11DF34u;
    {
        const bool branch_taken_0x11df34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF34u;
        // 0x11df38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df34) {
            ctx->pc = 0x11DF70u;
            return;
        }
    }
    ctx->pc = 0x11DF3Cu;
    // 0x11df3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11df40: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11df40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11df44: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11df44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11df48: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x11df48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x11df4c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DF4Cu;
    SET_GPR_U32(ctx, 31, 0x11DF54u);
    ctx->pc = 0x11DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF4Cu;
    // 0x11df50: 0xae110094  sw          $s1, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DF4Cu, 0x11DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF54u;
label_11df54:
    // 0x11df54: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x11df54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x11df58: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11df5c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DF5Cu;
    SET_GPR_U32(ctx, 31, 0x11DF64u);
    ctx->pc = 0x11DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF5Cu;
    // 0x11df60: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DF5Cu, 0x11DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF64u;
label_11df64:
    // 0x11df64: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x11df64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x11df68: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x11DF68u;
    {
        const bool branch_taken_0x11df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF68u;
        // 0x11df6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df68) {
            ctx->pc = 0x11E080u;
            return;
        }
    }
    ctx->pc = 0x11DF70u;
}
