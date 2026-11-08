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

// Function: entry_00133708
// Address: 0x133708 - 0x133774
void entry_00133708_0x133708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133708_0x133708");
#endif

    switch (ctx->pc) {
        case 0x133714u: goto label_133714;
        case 0x133734u: goto label_133734;
        case 0x133740u: goto label_133740;
        case 0x13374cu: goto label_13374c;
        default: break;
    }

    ctx->pc = 0x133708u;

label_133708:
    // 0x133708: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x133708u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13370c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x13370Cu;
    SET_GPR_U32(ctx, 31, 0x133714u);
    ctx->pc = 0x133710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13370Cu;
    // 0x133710: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x13370Cu, 0x133714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133714u;
label_133714:
    // 0x133714: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x133714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x133718: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x133718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13371c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13371cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x133720: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x133720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x133724: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x133724u;
    {
        const bool branch_taken_0x133724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133724u;
        // 0x133728: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133724) {
            ctx->pc = 0x133708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133708;
        }
    }
    ctx->pc = 0x13372Cu;
    // 0x13372c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x13372Cu;
    SET_GPR_U32(ctx, 31, 0x133734u);
    ctx->pc = 0x133730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13372Cu;
    // 0x133730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x13372Cu, 0x133734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133734u;
label_133734:
    // 0x133734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133738: 0xc040168  jal         func_1005A0
    ctx->pc = 0x133738u;
    SET_GPR_U32(ctx, 31, 0x133740u);
    ctx->pc = 0x13373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133738u;
    // 0x13373c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x133738u, 0x133740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133740u;
label_133740:
    // 0x133740: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x133740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x133744: 0xc040168  jal         func_1005A0
    ctx->pc = 0x133744u;
    SET_GPR_U32(ctx, 31, 0x13374Cu);
    ctx->pc = 0x133748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133744u;
    // 0x133748: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x133744u, 0x13374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13374Cu;
label_13374c:
    // 0x13374c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x13374cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x133750: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x133750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x133754: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x133754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x133758: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x133758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x13375c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x13375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x133760: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x133760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133764: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x133764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x133768: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x133768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13376c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13376Cu;
    {
        const bool branch_taken_0x13376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13376Cu;
        // 0x133770: 0xafa40060  sw          $a0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13376c) {
            ctx->pc = 0x13378Cu;
            return;
        }
    }
    ctx->pc = 0x133774u;
}
