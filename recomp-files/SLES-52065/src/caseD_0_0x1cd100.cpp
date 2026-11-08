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

// Function: caseD_0
// Address: 0x1cd100 - 0x1cd210
void caseD_0_0x1cd100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1cd100");
#endif

    switch (ctx->pc) {
        case 0x1cd114u: goto label_1cd114;
        case 0x1cd138u: goto label_1cd138;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1bcu: goto label_1cd1bc;
        case 0x1cd1c4u: goto label_1cd1c4;
        case 0x1cd1e4u: goto label_1cd1e4;
        case 0x1cd1f4u: goto label_1cd1f4;
        case 0x1cd204u: goto label_1cd204;
        case 0x1cd20cu: goto label_1cd20c;
        default: break;
    }

    ctx->pc = 0x1cd100u;

    // 0x1cd100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd104: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cd104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cd108: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cd10c: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CD10Cu;
    SET_GPR_U32(ctx, 31, 0x1CD114u);
    ctx->pc = 0x1CD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD10Cu;
    // 0x1cd110: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CD10Cu, 0x1CD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD114u;
label_1cd114:
    // 0x1cd114: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CD114u;
    {
        const bool branch_taken_0x1cd114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD114u;
        // 0x1cd118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd114) {
            ctx->pc = 0x1CD210u;
            return;
        }
    }
    ctx->pc = 0x1CD11Cu;
    // 0x1cd11c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd128: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd12c: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd130: 0xc07354c  jal         func_1CD530
    ctx->pc = 0x1CD130u;
    SET_GPR_U32(ctx, 31, 0x1CD138u);
    ctx->pc = 0x1CD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD130u;
    // 0x1cd134: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD530u, 0x1CD130u, 0x1CD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD138u;
label_1cd138:
    // 0x1cd138: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x1cd138u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd13c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd140: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1cd140u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1cd144: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1cd144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1cd148: 0x24a52ca0  addiu       $a1, $a1, 0x2CA0
    ctx->pc = 0x1cd148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11424));
    // 0x1cd14c: 0x24e72c70  addiu       $a3, $a3, 0x2C70
    ctx->pc = 0x1cd14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11376));
    // 0x1cd150: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1cd154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd15c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cd15cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cd160: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x1cd160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd164: 0xad020070  sw          $v0, 0x70($t0)
    ctx->pc = 0x1cd164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 2));
    // 0x1cd168: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd16c: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1cd16cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd170: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1cd174: 0x1102821  addu        $a1, $t0, $s0
    ctx->pc = 0x1cd174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd178: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd17c: 0x8ca50070  lw          $a1, 0x70($a1)
    ctx->pc = 0x1cd17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1cd180: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cd180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cd184: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cd184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cd188: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cd188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cd18c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd190: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1cd190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd194: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd198: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD198u;
    SET_GPR_U32(ctx, 31, 0x1CD1A0u);
    ctx->pc = 0x1CD19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD198u;
    // 0x1cd19c: 0x24450006  addiu       $a1, $v0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD198u, 0x1CD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd1a4: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd1a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd1ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd1b0: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd1b4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD1B4u;
    SET_GPR_U32(ctx, 31, 0x1CD1BCu);
    ctx->pc = 0x1CD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1B4u;
    // 0x1cd1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD1B4u, 0x1CD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1BCu;
label_1cd1bc:
    // 0x1cd1bc: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CD1BCu;
    SET_GPR_U32(ctx, 31, 0x1CD1C4u);
    ctx->pc = 0x1CD1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1BCu;
    // 0x1cd1c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CD1BCu, 0x1CD1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1C4u;
label_1cd1c4:
    // 0x1cd1c4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1cc: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd1d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd1d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd1d8: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd1dc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD1DCu;
    SET_GPR_U32(ctx, 31, 0x1CD1E4u);
    ctx->pc = 0x1CD1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1DCu;
    // 0x1cd1e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD1DCu, 0x1CD1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1E4u;
label_1cd1e4:
    // 0x1cd1e4: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1cd1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cd1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1ec: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1CD1ECu;
    SET_GPR_U32(ctx, 31, 0x1CD1F4u);
    ctx->pc = 0x1CD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1ECu;
    // 0x1cd1f0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1CD1ECu, 0x1CD1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1F4u;
label_1cd1f4:
    // 0x1cd1f4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cd1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1fc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD1FCu;
    SET_GPR_U32(ctx, 31, 0x1CD204u);
    ctx->pc = 0x1CD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1FCu;
    // 0x1cd200: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD1FCu, 0x1CD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD204u;
label_1cd204:
    // 0x1cd204: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD204u;
    SET_GPR_U32(ctx, 31, 0x1CD20Cu);
    ctx->pc = 0x1CD208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD204u;
    // 0x1cd208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD204u, 0x1CD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD20Cu;
label_1cd20c:
    // 0x1cd20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd210u;
}
