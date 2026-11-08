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

// Function: entry_001a6f34
// Address: 0x1a6f34 - 0x1a6f74
void entry_001a6f34_0x1a6f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6f34_0x1a6f34");
#endif

    switch (ctx->pc) {
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6f5cu: goto label_1a6f5c;
        default: break;
    }

    ctx->pc = 0x1a6f34u;

label_1a6f34:
    // 0x1a6f34: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x1a6f34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1a6f38:
    // 0x1a6f38: 0xc069c08  jal         func_1A7020
label_1a6f3c:
    if (ctx->pc == 0x1A6F3Cu) {
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F40u;
        goto label_1a6f40;
    }
    ctx->pc = 0x1A6F38u;
    SET_GPR_U32(ctx, 31, 0x1A6F40u);
    ctx->pc = 0x1A6F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F38u;
    // 0x1a6f3c: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7020u, 0x1A6F38u, 0x1A6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F40u;
label_1a6f40:
    // 0x1a6f40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a6f44:
    if (ctx->pc == 0x1A6F44u) {
        ctx->pc = 0x1A6F48u;
        goto label_1a6f48;
    }
    ctx->pc = 0x1A6F40u;
    {
        const bool branch_taken_0x1a6f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f40) {
            ctx->pc = 0x1A6F74u;
            return;
        }
    }
    ctx->pc = 0x1A6F48u;
label_1a6f48:
    // 0x1a6f48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6f4c:
    // 0x1a6f4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6f50:
    // 0x1a6f50: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1a6f54:
    // 0x1a6f54: 0x320f809  jalr        $t9
label_1a6f58:
    if (ctx->pc == 0x1A6F58u) {
        ctx->pc = 0x1A6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F54u;
        // 0x1a6f58: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F5Cu;
        goto label_1a6f5c;
    }
    ctx->pc = 0x1A6F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F5Cu);
        ctx->pc = 0x1A6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F54u;
        // 0x1a6f58: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F54u, 0x1A6F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F5Cu;
label_1a6f5c:
    // 0x1a6f5c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1a6f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f60:
    // 0x1a6f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f64:
    // 0x1a6f64: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1a6f68:
    // 0x1a6f68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a6f6c:
    // 0x1a6f6c: 0x320f809  jalr        $t9
label_1a6f70:
    if (ctx->pc == 0x1A6F70u) {
        ctx->pc = 0x1A6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F6Cu;
        // 0x1a6f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F74u;
        goto label_fallthrough_0x1a6f6c;
    }
    ctx->pc = 0x1A6F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F74u);
        ctx->pc = 0x1A6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F6Cu;
        // 0x1a6f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F6Cu, 0x1A6F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a6f6c:
    ctx->pc = 0x1A6F74u;
}
