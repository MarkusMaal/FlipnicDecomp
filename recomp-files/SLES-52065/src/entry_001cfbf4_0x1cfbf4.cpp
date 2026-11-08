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

// Function: entry_001cfbf4
// Address: 0x1cfbf4 - 0x1cfc4c
void entry_001cfbf4_0x1cfbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfbf4_0x1cfbf4");
#endif

    switch (ctx->pc) {
        case 0x1cfc08u: goto label_1cfc08;
        case 0x1cfc10u: goto label_1cfc10;
        case 0x1cfc2cu: goto label_1cfc2c;
        default: break;
    }

    ctx->pc = 0x1cfbf4u;

    // 0x1cfbf4: 0x9222282b  lbu         $v0, 0x282B($s1)
    ctx->pc = 0x1cfbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10283)));
    // 0x1cfbf8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CFBF8u;
    {
        const bool branch_taken_0x1cfbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfbf8) {
            ctx->pc = 0x1CFCA4u;
            return;
        }
    }
    ctx->pc = 0x1CFC00u;
    // 0x1cfc00: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFC00u;
    SET_GPR_U32(ctx, 31, 0x1CFC08u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFC00u, 0x1CFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC08u;
label_1cfc08:
    // 0x1cfc08: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1CFC08u;
    SET_GPR_U32(ctx, 31, 0x1CFC10u);
    ctx->pc = 0x1CFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC08u;
    // 0x1cfc0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1CFC08u, 0x1CFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC10u;
label_1cfc10:
    // 0x1cfc10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1cfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1cfc14: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cfc18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cfc1c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFC1Cu;
    {
        const bool branch_taken_0x1cfc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfc1c) {
            ctx->pc = 0x1CFC4Cu;
            return;
        }
    }
    ctx->pc = 0x1CFC24u;
    // 0x1cfc24: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFC24u;
    SET_GPR_U32(ctx, 31, 0x1CFC2Cu);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFC24u, 0x1CFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC2Cu;
label_1cfc2c:
    // 0x1cfc2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cfc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cfc30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfc34: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1cfc34u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cfc38: 0x0  nop
    ctx->pc = 0x1cfc38u;
    // NOP
    // 0x1cfc3c: 0x0  nop
    ctx->pc = 0x1cfc3cu;
    // NOP
    // 0x1cfc40: 0x1010  mfhi        $v0
    ctx->pc = 0x1cfc40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1cfc44: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFC44u;
    {
        const bool branch_taken_0x1cfc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfc44) {
            ctx->pc = 0x1CFC84u;
            return;
        }
    }
    ctx->pc = 0x1CFC4Cu;
}
