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

// Function: entry_00198b64
// Address: 0x198b64 - 0x198ba8
void entry_00198b64_0x198b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b64_0x198b64");
#endif

    switch (ctx->pc) {
        case 0x198b6cu: goto label_198b6c;
        case 0x198b9cu: goto label_198b9c;
        default: break;
    }

    ctx->pc = 0x198b64u;

label_198b64:
    // 0x198b64: 0xc04bf44  jal         func_12FD10
label_198b68:
    if (ctx->pc == 0x198B68u) {
        ctx->pc = 0x198B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B64u;
        // 0x198b68: 0x26240490  addiu       $a0, $s1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B6Cu;
        goto label_198b6c;
    }
    ctx->pc = 0x198B64u;
    SET_GPR_U32(ctx, 31, 0x198B6Cu);
    ctx->pc = 0x198B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B64u;
    // 0x198b68: 0x26240490  addiu       $a0, $s1, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x198B64u, 0x198B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B6Cu;
label_198b6c:
    // 0x198b6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x198b6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198b70:
    // 0x198b70: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
label_198b74:
    if (ctx->pc == 0x198B74u) {
        ctx->pc = 0x198B78u;
        goto label_198b78;
    }
    ctx->pc = 0x198B70u;
    {
        const bool branch_taken_0x198b70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x198b70) {
            ctx->pc = 0x198BDCu;
            return;
        }
    }
    ctx->pc = 0x198B78u;
label_198b78:
    // 0x198b78: 0x8e2204d0  lw          $v0, 0x4D0($s1)
    ctx->pc = 0x198b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1232)));
label_198b7c:
    // 0x198b7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_198b80:
    if (ctx->pc == 0x198B80u) {
        ctx->pc = 0x198B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B7Cu;
        // 0x198b80: 0x263204d0  addiu       $s2, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B84u;
        goto label_198b84;
    }
    ctx->pc = 0x198B7Cu;
    {
        const bool branch_taken_0x198b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B7Cu;
        // 0x198b80: 0x263204d0  addiu       $s2, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b7c) {
            ctx->pc = 0x198BA8u;
            return;
        }
    }
    ctx->pc = 0x198B84u;
label_198b84:
    // 0x198b84: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_198b88:
    // 0x198b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x198b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198b8c:
    // 0x198b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198b90:
    // 0x198b90: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_198b94:
    // 0x198b94: 0x320f809  jalr        $t9
label_198b98:
    if (ctx->pc == 0x198B98u) {
        ctx->pc = 0x198B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B94u;
        // 0x198b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B9Cu;
        goto label_198b9c;
    }
    ctx->pc = 0x198B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x198B9Cu);
        ctx->pc = 0x198B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B94u;
        // 0x198b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B94u, 0x198B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198B9Cu;
label_198b9c:
    // 0x198b9c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x198b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_198ba0:
    // 0x198ba0: 0x1000000e  b           . + 4 + (0xE << 2)
label_198ba4:
    if (ctx->pc == 0x198BA4u) {
        ctx->pc = 0x198BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BA0u;
        // 0x198ba4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198BA8u;
        goto label_fallthrough_0x198ba0;
    }
    ctx->pc = 0x198BA0u;
    {
        const bool branch_taken_0x198ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198BA0u;
        // 0x198ba4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ba0) {
            ctx->pc = 0x198BDCu;
            return;
        }
    }
label_fallthrough_0x198ba0:
    ctx->pc = 0x198BA8u;
}
