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

// Function: entry_0015d94c
// Address: 0x15d94c - 0x15d9b0
void entry_0015d94c_0x15d94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d94c_0x15d94c");
#endif

    switch (ctx->pc) {
        case 0x15d974u: goto label_15d974;
        case 0x15d980u: goto label_15d980;
        case 0x15d98cu: goto label_15d98c;
        default: break;
    }

    ctx->pc = 0x15d94cu;

    // 0x15d94c: 0x8ea42c1c  lw          $a0, 0x2C1C($s5)
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15d950: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15d954: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d958: 0x8470000a  lh          $s0, 0xA($v1)
    ctx->pc = 0x15d958u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x15d95c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x15d95cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15d960: 0x142000f5  bnez        $at, . + 4 + (0xF5 << 2)
    ctx->pc = 0x15D960u;
    {
        const bool branch_taken_0x15d960 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D960u;
        // 0x15d964: 0x8c740030  lw          $s4, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d960) {
            ctx->pc = 0x15DD38u;
            return;
        }
    }
    ctx->pc = 0x15D968u;
    // 0x15d968: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x15d968u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15d96c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15D96Cu;
    SET_GPR_U32(ctx, 31, 0x15D974u);
    ctx->pc = 0x15D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D96Cu;
    // 0x15d970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15D96Cu, 0x15D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D974u;
label_15d974:
    // 0x15d974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d978: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15D978u;
    SET_GPR_U32(ctx, 31, 0x15D980u);
    ctx->pc = 0x15D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D978u;
    // 0x15d97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15D978u, 0x15D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D980u;
label_15d980:
    // 0x15d980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d984: 0xc040168  jal         func_1005A0
    ctx->pc = 0x15D984u;
    SET_GPR_U32(ctx, 31, 0x15D98Cu);
    ctx->pc = 0x15D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D984u;
    // 0x15d988: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x15D984u, 0x15D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D98Cu;
label_15d98c:
    // 0x15d98c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15d98cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15d990: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15d990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d994: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x15D994u;
    {
        const bool branch_taken_0x15d994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D994u;
        // 0x15d998: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d994) {
            ctx->pc = 0x15DB78u;
            return;
        }
    }
    ctx->pc = 0x15D99Cu;
    // 0x15d99c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x15d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x15d9a0: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15d9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15d9a4: 0x14200060  bnez        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x15D9A4u;
    {
        const bool branch_taken_0x15d9a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9A4u;
        // 0x15d9a8: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9a4) {
            ctx->pc = 0x15DB28u;
            return;
        }
    }
    ctx->pc = 0x15D9ACu;
    // 0x15d9ac: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x15d9acu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15d9b0u;
}
