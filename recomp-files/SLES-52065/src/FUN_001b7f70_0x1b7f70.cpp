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

// Function: FUN_001b7f70
// Address: 0x1b7f70 - 0x1b8014
void FUN_001b7f70_0x1b7f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7f70_0x1b7f70");
#endif

    ctx->pc = 0x1b7f70u;

    // 0x1b7f70: 0x90820041  lbu         $v0, 0x41($a0)
    ctx->pc = 0x1b7f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 65)));
    // 0x1b7f74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7F74u;
    {
        const bool branch_taken_0x1b7f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F74u;
        // 0x1b7f78: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f74) {
            ctx->pc = 0x1B7F84u;
            goto label_1b7f84;
        }
    }
    ctx->pc = 0x1B7F7Cu;
    // 0x1b7f7c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B7F7Cu;
    {
        const bool branch_taken_0x1b7f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F7Cu;
        // 0x1b7f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f7c) {
            ctx->pc = 0x1B800Cu;
            goto label_1b800c;
        }
    }
    ctx->pc = 0x1B7F84u;
label_1b7f84:
    // 0x1b7f84: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1b7f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952952)));
    // 0x1b7f88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7F88u;
    {
        const bool branch_taken_0x1b7f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F88u;
        // 0x1b7f8c: 0x8c83004c  lw          $v1, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f88) {
            ctx->pc = 0x1B7FA4u;
            goto label_1b7fa4;
        }
    }
    ctx->pc = 0x1B7F90u;
    // 0x1b7f90: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b7f94: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x1b7f98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b7f9c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b7f9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7fa0: 0x0  nop
    ctx->pc = 0x1b7fa0u;
    // NOP
label_1b7fa4:
    // 0x1b7fa4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FA4u;
    {
        const bool branch_taken_0x1b7fa4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FA4u;
        // 0x1b7fa8: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fa4) {
            ctx->pc = 0x1B7FB4u;
            goto label_1b7fb4;
        }
    }
    ctx->pc = 0x1B7FACu;
    // 0x1b7fac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B7FACu;
    {
        const bool branch_taken_0x1b7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FACu;
        // 0x1b7fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fac) {
            ctx->pc = 0x1B8008u;
            goto label_1b8008;
        }
    }
    ctx->pc = 0x1B7FB4u;
label_1b7fb4:
    // 0x1b7fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7fbc: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1b7fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7fc0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FC0u;
    {
        const bool branch_taken_0x1b7fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b7fc0) {
            ctx->pc = 0x1B7FD0u;
            goto label_1b7fd0;
        }
    }
    ctx->pc = 0x1B7FC8u;
    // 0x1b7fc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FC8u;
    {
        const bool branch_taken_0x1b7fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC8u;
        // 0x1b7fcc: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fc8) {
            ctx->pc = 0x1B7FD8u;
            goto label_1b7fd8;
        }
    }
    ctx->pc = 0x1B7FD0u;
label_1b7fd0:
    // 0x1b7fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7fd4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1b7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b7fd8:
    // 0x1b7fd8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7FD8u;
    {
        const bool branch_taken_0x1b7fd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b7fd8) {
            ctx->pc = 0x1B8000u;
            goto label_1b8000;
        }
    }
    ctx->pc = 0x1B7FE0u;
    // 0x1b7fe0: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x1b7fe0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b7fe4: 0x0  nop
    ctx->pc = 0x1b7fe4u;
    // NOP
    // 0x1b7fe8: 0x0  nop
    ctx->pc = 0x1b7fe8u;
    // NOP
    // 0x1b7fec: 0x1010  mfhi        $v0
    ctx->pc = 0x1b7fecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b7ff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FF0u;
    {
        const bool branch_taken_0x1b7ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ff0) {
            ctx->pc = 0x1B8000u;
            goto label_1b8000;
        }
    }
    ctx->pc = 0x1B7FF8u;
    // 0x1b7ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7FF8u;
    {
        const bool branch_taken_0x1b7ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FF8u;
        // 0x1b7ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ff8) {
            ctx->pc = 0x1B8004u;
            goto label_1b8004;
        }
    }
    ctx->pc = 0x1B8000u;
label_1b8000:
    // 0x1b8000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8004:
    // 0x1b8004: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1b8004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1b8008:
    // 0x1b8008: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b8008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b800c:
    // 0x1b800c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B800Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B800Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8014u;
}
