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

// Function: entry_0013a9e4
// Address: 0x13a9e4 - 0x13aa7c
void entry_0013a9e4_0x13a9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a9e4_0x13a9e4");
#endif

    switch (ctx->pc) {
        case 0x13aa24u: goto label_13aa24;
        case 0x13aa34u: goto label_13aa34;
        case 0x13aa40u: goto label_13aa40;
        case 0x13aa5cu: goto label_13aa5c;
        case 0x13aa6cu: goto label_13aa6c;
        default: break;
    }

    ctx->pc = 0x13a9e4u;

    // 0x13a9e4: 0x0  nop
    ctx->pc = 0x13a9e4u;
    // NOP
    // 0x13a9e8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a9ec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a9f0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a9f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a9f8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a9fc: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x13a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x13aa00: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13aa04: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13aa08: 0xac540024  sw          $s4, 0x24($v0)
    ctx->pc = 0x13aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 20));
    // 0x13aa0c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13aa10: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13aa14: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13aa18: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13aa1c: 0xc080748  jal         func_201D20
    ctx->pc = 0x13AA1Cu;
    SET_GPR_U32(ctx, 31, 0x13AA24u);
    ctx->pc = 0x13AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA1Cu;
    // 0x13aa20: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x13AA1Cu, 0x13AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA24u;
label_13aa24:
    // 0x13aa24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13AA24u;
    {
        const bool branch_taken_0x13aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aa24) {
            ctx->pc = 0x13AA7Cu;
            return;
        }
    }
    ctx->pc = 0x13AA2Cu;
    // 0x13aa2c: 0xc04c25c  jal         func_130970
    ctx->pc = 0x13AA2Cu;
    SET_GPR_U32(ctx, 31, 0x13AA34u);
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x13AA2Cu, 0x13AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA34u;
label_13aa34:
    // 0x13aa34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13aa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa38: 0xc080702  jal         func_201C08
    ctx->pc = 0x13AA38u;
    SET_GPR_U32(ctx, 31, 0x13AA40u);
    ctx->pc = 0x13AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA38u;
    // 0x13aa3c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x13AA38u, 0x13AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA40u;
label_13aa40:
    // 0x13aa40: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13aa44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13aa48: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13aa4c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13aa50: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13aa54: 0xc080664  jal         func_201990
    ctx->pc = 0x13AA54u;
    SET_GPR_U32(ctx, 31, 0x13AA5Cu);
    ctx->pc = 0x13AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA54u;
    // 0x13aa58: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x13AA54u, 0x13AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA5Cu;
label_13aa5c:
    // 0x13aa5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13aa60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13aa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa64: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x13AA64u;
    SET_GPR_U32(ctx, 31, 0x13AA6Cu);
    ctx->pc = 0x13AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA64u;
    // 0x13aa68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x13AA64u, 0x13AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA6Cu;
label_13aa6c:
    // 0x13aa6c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13aa70: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13aa74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AA74u;
    {
        const bool branch_taken_0x13aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA74u;
        // 0x13aa78: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa74) {
            ctx->pc = 0x13AA8Cu;
            return;
        }
    }
    ctx->pc = 0x13AA7Cu;
}
