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

// Function: FUN_001c4430
// Address: 0x1c4430 - 0x1c4574
void FUN_001c4430_0x1c4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4430_0x1c4430");
#endif

    switch (ctx->pc) {
        case 0x1c445cu: goto label_1c445c;
        case 0x1c4468u: goto label_1c4468;
        case 0x1c4474u: goto label_1c4474;
        case 0x1c4480u: goto label_1c4480;
        case 0x1c4494u: goto label_1c4494;
        case 0x1c44a4u: goto label_1c44a4;
        case 0x1c44b4u: goto label_1c44b4;
        case 0x1c44c4u: goto label_1c44c4;
        case 0x1c44d4u: goto label_1c44d4;
        case 0x1c44e4u: goto label_1c44e4;
        case 0x1c44f4u: goto label_1c44f4;
        case 0x1c4504u: goto label_1c4504;
        case 0x1c450cu: goto label_1c450c;
        case 0x1c4518u: goto label_1c4518;
        case 0x1c4524u: goto label_1c4524;
        case 0x1c4538u: goto label_1c4538;
        case 0x1c454cu: goto label_1c454c;
        case 0x1c4560u: goto label_1c4560;
        default: break;
    }

    ctx->pc = 0x1c4430u;

    // 0x1c4430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c4434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c443c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4440: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1c4440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1c4444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4448: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x1c4448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x1c444c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1c444cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1c4450: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1c4450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1c4454: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C4454u;
    SET_GPR_U32(ctx, 31, 0x1C445Cu);
    ctx->pc = 0x1C4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4454u;
    // 0x1c4458: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C4454u, 0x1C445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C445Cu;
label_1c445c:
    // 0x1c445c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c445cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4460: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C4460u;
    SET_GPR_U32(ctx, 31, 0x1C4468u);
    ctx->pc = 0x1C4464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4460u;
    // 0x1c4464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C4460u, 0x1C4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4468u;
label_1c4468:
    // 0x1c4468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c446c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C446Cu;
    SET_GPR_U32(ctx, 31, 0x1C4474u);
    ctx->pc = 0x1C4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C446Cu;
    // 0x1c4470: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C446Cu, 0x1C4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4474u;
label_1c4474:
    // 0x1c4474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4478: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C4478u;
    SET_GPR_U32(ctx, 31, 0x1C4480u);
    ctx->pc = 0x1C447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4478u;
    // 0x1c447c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C4478u, 0x1C4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4480u;
label_1c4480:
    // 0x1c4480: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1c4480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1c4484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4488: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c4488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c448c: 0xc06dfa0  jal         func_1B7E80
    ctx->pc = 0x1C448Cu;
    SET_GPR_U32(ctx, 31, 0x1C4494u);
    ctx->pc = 0x1C4490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C448Cu;
    // 0x1c4490: 0x24c65160  addiu       $a2, $a2, 0x5160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E80u, 0x1C448Cu, 0x1C4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4494u;
label_1c4494:
    // 0x1c4494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4498: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c449c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C449Cu;
    SET_GPR_U32(ctx, 31, 0x1C44A4u);
    ctx->pc = 0x1C44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C449Cu;
    // 0x1c44a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C449Cu, 0x1C44A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44A4u;
label_1c44a4:
    // 0x1c44a4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c44a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c44a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c44a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ac: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C44ACu;
    SET_GPR_U32(ctx, 31, 0x1C44B4u);
    ctx->pc = 0x1C44B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44ACu;
    // 0x1c44b0: 0x24a55180  addiu       $a1, $a1, 0x5180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C44ACu, 0x1C44B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44B4u;
label_1c44b4:
    // 0x1c44b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c44bc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C44BCu;
    SET_GPR_U32(ctx, 31, 0x1C44C4u);
    ctx->pc = 0x1C44C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44BCu;
    // 0x1c44c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C44BCu, 0x1C44C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44C4u;
label_1c44c4:
    // 0x1c44c4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c44c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c44c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c44c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44cc: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C44CCu;
    SET_GPR_U32(ctx, 31, 0x1C44D4u);
    ctx->pc = 0x1C44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44CCu;
    // 0x1c44d0: 0x24a55180  addiu       $a1, $a1, 0x5180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C44CCu, 0x1C44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44D4u;
label_1c44d4:
    // 0x1c44d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c44dc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C44DCu;
    SET_GPR_U32(ctx, 31, 0x1C44E4u);
    ctx->pc = 0x1C44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44DCu;
    // 0x1c44e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C44DCu, 0x1C44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44E4u;
label_1c44e4:
    // 0x1c44e4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c44e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c44e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c44e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ec: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C44ECu;
    SET_GPR_U32(ctx, 31, 0x1C44F4u);
    ctx->pc = 0x1C44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44ECu;
    // 0x1c44f0: 0x24a55160  addiu       $a1, $a1, 0x5160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C44ECu, 0x1C44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44F4u;
label_1c44f4:
    // 0x1c44f4: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x1c44f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c44f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44fc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C44FCu;
    SET_GPR_U32(ctx, 31, 0x1C4504u);
    ctx->pc = 0x1C4500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44FCu;
    // 0x1c4500: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C44FCu, 0x1C4504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4504u;
label_1c4504:
    // 0x1c4504: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C4504u;
    SET_GPR_U32(ctx, 31, 0x1C450Cu);
    ctx->pc = 0x1C4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4504u;
    // 0x1c4508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C4504u, 0x1C450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C450Cu;
label_1c450c:
    // 0x1c450c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4510: 0xc071160  jal         func_1C4580
    ctx->pc = 0x1C4510u;
    SET_GPR_U32(ctx, 31, 0x1C4518u);
    ctx->pc = 0x1C4514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4510u;
    // 0x1c4514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4580u, 0x1C4510u, 0x1C4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4518u;
label_1c4518:
    // 0x1c4518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c451c: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C451Cu;
    SET_GPR_U32(ctx, 31, 0x1C4524u);
    ctx->pc = 0x1C4520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C451Cu;
    // 0x1c4520: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C451Cu, 0x1C4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4524u;
label_1c4524:
    // 0x1c4524: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c4524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c4528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c452c: 0x24a55190  addiu       $a1, $a1, 0x5190
    ctx->pc = 0x1c452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20880));
    // 0x1c4530: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1C4530u;
    SET_GPR_U32(ctx, 31, 0x1C4538u);
    ctx->pc = 0x1C4534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4530u;
    // 0x1c4534: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1C4530u, 0x1C4538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4538u;
label_1c4538:
    // 0x1c4538: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c4538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c453c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4540: 0x24a55210  addiu       $a1, $a1, 0x5210
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21008));
    // 0x1c4544: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C4544u;
    SET_GPR_U32(ctx, 31, 0x1C454Cu);
    ctx->pc = 0x1C4548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4544u;
    // 0x1c4548: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C4544u, 0x1C454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C454Cu;
label_1c454c:
    // 0x1c454c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c454cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c4550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4554: 0x24a552c0  addiu       $a1, $a1, 0x52C0
    ctx->pc = 0x1c4554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21184));
    // 0x1c4558: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C4558u;
    SET_GPR_U32(ctx, 31, 0x1C4560u);
    ctx->pc = 0x1C455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4558u;
    // 0x1c455c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C4558u, 0x1C4560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4560u;
label_1c4560:
    // 0x1c4560: 0xa2000264  sb          $zero, 0x264($s0)
    ctx->pc = 0x1c4560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c456c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C456Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C456Cu;
        // 0x1c4570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C456Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4574u;
}
