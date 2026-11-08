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

// Function: entry_001cb5a0
// Address: 0x1cb5a0 - 0x1cb628
void entry_001cb5a0_0x1cb5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb5a0_0x1cb5a0");
#endif

    switch (ctx->pc) {
        case 0x1cb5a8u: goto label_1cb5a8;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5d0u: goto label_1cb5d0;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5ecu: goto label_1cb5ec;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb614u: goto label_1cb614;
        default: break;
    }

    ctx->pc = 0x1cb5a0u;

    // 0x1cb5a0: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CB5A0u;
    SET_GPR_U32(ctx, 31, 0x1CB5A8u);
    ctx->pc = 0x1CB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5A0u;
    // 0x1cb5a4: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CB5A0u, 0x1CB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5A8u;
label_1cb5a8:
    // 0x1cb5a8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5b0: 0x24a579f0  addiu       $a1, $a1, 0x79F0
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31216));
    // 0x1cb5b4: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CB5B4u;
    SET_GPR_U32(ctx, 31, 0x1CB5BCu);
    ctx->pc = 0x1CB5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5B4u;
    // 0x1cb5b8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CB5B4u, 0x1CB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5BCu;
label_1cb5bc:
    // 0x1cb5bc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5c4: 0x24a57c50  addiu       $a1, $a1, 0x7C50
    ctx->pc = 0x1cb5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31824));
    // 0x1cb5c8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CB5C8u;
    SET_GPR_U32(ctx, 31, 0x1CB5D0u);
    ctx->pc = 0x1CB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5C8u;
    // 0x1cb5cc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CB5C8u, 0x1CB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5D0u;
label_1cb5d0:
    // 0x1cb5d0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5d8: 0x24a57d40  addiu       $a1, $a1, 0x7D40
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32064));
    // 0x1cb5dc: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CB5DCu;
    SET_GPR_U32(ctx, 31, 0x1CB5E4u);
    ctx->pc = 0x1CB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5DCu;
    // 0x1cb5e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CB5DCu, 0x1CB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5E4u;
label_1cb5e4:
    // 0x1cb5e4: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CB5E4u;
    SET_GPR_U32(ctx, 31, 0x1CB5ECu);
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CB5E4u, 0x1CB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5ECu;
label_1cb5ec:
    // 0x1cb5ec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cb5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cb5f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb5f4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB5F4u;
    {
        const bool branch_taken_0x1cb5f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb5f4) {
            ctx->pc = 0x1CB628u;
            return;
        }
    }
    ctx->pc = 0x1CB5FCu;
    // 0x1cb5fc: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CB5FCu;
    SET_GPR_U32(ctx, 31, 0x1CB604u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CB5FCu, 0x1CB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB604u;
label_1cb604:
    // 0x1cb604: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb60c: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CB60Cu;
    SET_GPR_U32(ctx, 31, 0x1CB614u);
    ctx->pc = 0x1CB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB60Cu;
    // 0x1cb610: 0x24a579a0  addiu       $a1, $a1, 0x79A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CB60Cu, 0x1CB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB614u;
label_1cb614:
    // 0x1cb614: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cb614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cb618: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb61c: 0x24a579b0  addiu       $a1, $a1, 0x79B0
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31152));
    // 0x1cb620: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CB620u;
    SET_GPR_U32(ctx, 31, 0x1CB628u);
    ctx->pc = 0x1CB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB620u;
    // 0x1cb624: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CB620u, 0x1CB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB628u;
}
