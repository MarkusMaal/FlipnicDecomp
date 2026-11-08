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

// Function: entry_001cb6e8
// Address: 0x1cb6e8 - 0x1cb770
void entry_001cb6e8_0x1cb6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb6e8_0x1cb6e8");
#endif

    switch (ctx->pc) {
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb718u: goto label_1cb718;
        case 0x1cb72cu: goto label_1cb72c;
        case 0x1cb734u: goto label_1cb734;
        case 0x1cb74cu: goto label_1cb74c;
        case 0x1cb75cu: goto label_1cb75c;
        default: break;
    }

    ctx->pc = 0x1cb6e8u;

    // 0x1cb6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb6ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6f0: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x1cb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
    // 0x1cb6f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb6f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6fc: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CB6FCu;
    SET_GPR_U32(ctx, 31, 0x1CB704u);
    ctx->pc = 0x1CB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6FCu;
    // 0x1cb700: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CB6FCu, 0x1CB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB704u;
label_1cb704:
    // 0x1cb704: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb70c: 0x24a57da0  addiu       $a1, $a1, 0x7DA0
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32160));
    // 0x1cb710: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CB710u;
    SET_GPR_U32(ctx, 31, 0x1CB718u);
    ctx->pc = 0x1CB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB710u;
    // 0x1cb714: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CB710u, 0x1CB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB718u;
label_1cb718:
    // 0x1cb718: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb71c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb720: 0x24a57eb0  addiu       $a1, $a1, 0x7EB0
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32432));
    // 0x1cb724: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CB724u;
    SET_GPR_U32(ctx, 31, 0x1CB72Cu);
    ctx->pc = 0x1CB728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB724u;
    // 0x1cb728: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CB724u, 0x1CB72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB72Cu;
label_1cb72c:
    // 0x1cb72c: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CB72Cu;
    SET_GPR_U32(ctx, 31, 0x1CB734u);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CB72Cu, 0x1CB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB734u;
label_1cb734:
    // 0x1cb734: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cb734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cb738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb73c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB73Cu;
    {
        const bool branch_taken_0x1cb73c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb73c) {
            ctx->pc = 0x1CB770u;
            return;
        }
    }
    ctx->pc = 0x1CB744u;
    // 0x1cb744: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CB744u;
    SET_GPR_U32(ctx, 31, 0x1CB74Cu);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CB744u, 0x1CB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB74Cu;
label_1cb74c:
    // 0x1cb74c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb750: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb754: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CB754u;
    SET_GPR_U32(ctx, 31, 0x1CB75Cu);
    ctx->pc = 0x1CB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB754u;
    // 0x1cb758: 0x24a579b0  addiu       $a1, $a1, 0x79B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CB754u, 0x1CB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB75Cu;
label_1cb75c:
    // 0x1cb75c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb760: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb764: 0x24a579a0  addiu       $a1, $a1, 0x79A0
    ctx->pc = 0x1cb764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
    // 0x1cb768: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CB768u;
    SET_GPR_U32(ctx, 31, 0x1CB770u);
    ctx->pc = 0x1CB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB768u;
    // 0x1cb76c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CB768u, 0x1CB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB770u;
}
