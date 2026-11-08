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

// Function: entry_001ce908
// Address: 0x1ce908 - 0x1ce9a0
void entry_001ce908_0x1ce908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce908_0x1ce908");
#endif

    switch (ctx->pc) {
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce91cu: goto label_1ce91c;
        case 0x1ce928u: goto label_1ce928;
        case 0x1ce934u: goto label_1ce934;
        case 0x1ce960u: goto label_1ce960;
        case 0x1ce97cu: goto label_1ce97c;
        case 0x1ce984u: goto label_1ce984;
        case 0x1ce994u: goto label_1ce994;
        case 0x1ce99cu: goto label_1ce99c;
        default: break;
    }

    ctx->pc = 0x1ce908u;

    // 0x1ce908: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CE908u;
    SET_GPR_U32(ctx, 31, 0x1CE910u);
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CE908u, 0x1CE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE910u;
label_1ce910:
    // 0x1ce910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce914: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CE914u;
    SET_GPR_U32(ctx, 31, 0x1CE91Cu);
    ctx->pc = 0x1CE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE914u;
    // 0x1ce918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CE914u, 0x1CE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE91Cu;
label_1ce91c:
    // 0x1ce91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce920: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CE920u;
    SET_GPR_U32(ctx, 31, 0x1CE928u);
    ctx->pc = 0x1CE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE920u;
    // 0x1ce924: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CE920u, 0x1CE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE928u;
label_1ce928:
    // 0x1ce928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce92c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CE92Cu;
    SET_GPR_U32(ctx, 31, 0x1CE934u);
    ctx->pc = 0x1CE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE92Cu;
    // 0x1ce930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CE92Cu, 0x1CE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE934u;
label_1ce934:
    // 0x1ce934: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce93c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ce940: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1ce940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ce944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce948: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ce948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce94c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ce94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce950: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1ce950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ce954: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ce954u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce958: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CE958u;
    SET_GPR_U32(ctx, 31, 0x1CE960u);
    ctx->pc = 0x1CE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE958u;
    // 0x1ce95c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CE958u, 0x1CE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE960u;
label_1ce960:
    // 0x1ce960: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ce960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce964: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ce964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ce968: 0x1046000d  beq         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE968u;
    {
        const bool branch_taken_0x1ce968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE968u;
        // 0x1ce96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce968) {
            ctx->pc = 0x1CE9A0u;
            return;
        }
    }
    ctx->pc = 0x1CE970u;
    // 0x1ce970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce974: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE974u;
    SET_GPR_U32(ctx, 31, 0x1CE97Cu);
    ctx->pc = 0x1CE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE974u;
    // 0x1ce978: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE974u, 0x1CE97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE97Cu;
label_1ce97c:
    // 0x1ce97c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CE97Cu;
    SET_GPR_U32(ctx, 31, 0x1CE984u);
    ctx->pc = 0x1CE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE97Cu;
    // 0x1ce980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CE97Cu, 0x1CE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE984u;
label_1ce984:
    // 0x1ce984: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce98c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE98Cu;
    SET_GPR_U32(ctx, 31, 0x1CE994u);
    ctx->pc = 0x1CE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE98Cu;
    // 0x1ce990: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE98Cu, 0x1CE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE994u;
label_1ce994:
    // 0x1ce994: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CE994u;
    SET_GPR_U32(ctx, 31, 0x1CE99Cu);
    ctx->pc = 0x1CE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE994u;
    // 0x1ce998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CE994u, 0x1CE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE99Cu;
label_1ce99c:
    // 0x1ce99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ce9a0u;
}
