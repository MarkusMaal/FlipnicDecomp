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

// Function: entry_0019daf8
// Address: 0x19daf8 - 0x19db48
void entry_0019daf8_0x19daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019daf8_0x19daf8");
#endif

    switch (ctx->pc) {
        case 0x19db3cu: goto label_19db3c;
        default: break;
    }

    ctx->pc = 0x19daf8u;

    // 0x19daf8: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x19daf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x19dafc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19db00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19db04: 0x1062ffc4  beq         $v1, $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x19DB04u;
    {
        const bool branch_taken_0x19db04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19db04) {
            ctx->pc = 0x19DA18u;
            return;
        }
    }
    ctx->pc = 0x19DB0Cu;
    // 0x19db0c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19db10: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x19db10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19db14: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x19db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x19db18: 0xac910674  sw          $s1, 0x674($a0)
    ctx->pc = 0x19db18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1652), GPR_U32(ctx, 17));
    // 0x19db1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19db20: 0xaea30670  sw          $v1, 0x670($s5)
    ctx->pc = 0x19db20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 3));
    // 0x19db24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19db24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db28: 0xaea00984  sw          $zero, 0x984($s5)
    ctx->pc = 0x19db28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2436), GPR_U32(ctx, 0));
    // 0x19db2c: 0xaea00988  sw          $zero, 0x988($s5)
    ctx->pc = 0x19db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2440), GPR_U32(ctx, 0));
    // 0x19db30: 0xaea0098c  sw          $zero, 0x98C($s5)
    ctx->pc = 0x19db30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2444), GPR_U32(ctx, 0));
    // 0x19db34: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19DB34u;
    SET_GPR_U32(ctx, 31, 0x19DB3Cu);
    ctx->pc = 0x19DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB34u;
    // 0x19db38: 0xaea20990  sw          $v0, 0x990($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 2448), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19DB34u, 0x19DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB3Cu;
label_19db3c:
    // 0x19db3c: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x19DB3Cu;
    {
        const bool branch_taken_0x19db3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db3c) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19DB44u;
    // 0x19db44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19db44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19db48u;
}
