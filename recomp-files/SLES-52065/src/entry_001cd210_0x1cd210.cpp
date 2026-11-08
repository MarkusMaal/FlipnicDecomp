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

// Function: entry_001cd210
// Address: 0x1cd210 - 0x1cd320
void entry_001cd210_0x1cd210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd210_0x1cd210");
#endif

    switch (ctx->pc) {
        case 0x1cd220u: goto label_1cd220;
        case 0x1cd244u: goto label_1cd244;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2c8u: goto label_1cd2c8;
        case 0x1cd2d0u: goto label_1cd2d0;
        case 0x1cd2f0u: goto label_1cd2f0;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd318u: goto label_1cd318;
        default: break;
    }

    ctx->pc = 0x1cd210u;

    // 0x1cd210: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cd214: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1cd214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cd218: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CD218u;
    SET_GPR_U32(ctx, 31, 0x1CD220u);
    ctx->pc = 0x1CD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD218u;
    // 0x1cd21c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CD218u, 0x1CD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD220u;
label_1cd220:
    // 0x1cd220: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1CD220u;
    {
        const bool branch_taken_0x1cd220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd220) {
            ctx->pc = 0x1CD3C8u;
            return;
        }
    }
    ctx->pc = 0x1CD228u;
    // 0x1cd228: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd230: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd234: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd238: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1cd238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd23c: 0xc07354c  jal         func_1CD530
    ctx->pc = 0x1CD23Cu;
    SET_GPR_U32(ctx, 31, 0x1CD244u);
    ctx->pc = 0x1CD240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD23Cu;
    // 0x1cd240: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD530u, 0x1CD23Cu, 0x1CD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD244u;
label_1cd244:
    // 0x1cd244: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd248: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cd248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cd24c: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1cd24cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1cd250: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1cd254: 0x24a52ca0  addiu       $a1, $a1, 0x2CA0
    ctx->pc = 0x1cd254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11424));
    // 0x1cd258: 0x24e72c70  addiu       $a3, $a3, 0x2C70
    ctx->pc = 0x1cd258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11376));
    // 0x1cd25c: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1cd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
    // 0x1cd260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd268: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cd268u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cd26c: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x1cd26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd270: 0xad020070  sw          $v0, 0x70($t0)
    ctx->pc = 0x1cd270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 2));
    // 0x1cd274: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd278: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd27c: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1cd280: 0x1102821  addu        $a1, $t0, $s0
    ctx->pc = 0x1cd280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1cd284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd288: 0x8ca50070  lw          $a1, 0x70($a1)
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1cd28c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cd290: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cd290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cd294: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cd294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cd298: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1cd298u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cd29c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1cd29cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd2a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd2a4: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CD2A4u;
    SET_GPR_U32(ctx, 31, 0x1CD2ACu);
    ctx->pc = 0x1CD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2A4u;
    // 0x1cd2a8: 0x24450006  addiu       $a1, $v0, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CD2A4u, 0x1CD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2ACu;
label_1cd2ac:
    // 0x1cd2ac: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd2b0: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd2b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd2b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd2bc: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd2c0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD2C0u;
    SET_GPR_U32(ctx, 31, 0x1CD2C8u);
    ctx->pc = 0x1CD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2C0u;
    // 0x1cd2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD2C0u, 0x1CD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2C8u;
label_1cd2c8:
    // 0x1cd2c8: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1CD2C8u;
    SET_GPR_U32(ctx, 31, 0x1CD2D0u);
    ctx->pc = 0x1CD2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2C8u;
    // 0x1cd2cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1CD2C8u, 0x1CD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2D0u;
label_1cd2d0:
    // 0x1cd2d0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2d8: 0x24450006  addiu       $a1, $v0, 0x6
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1cd2dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cd2e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cd2e4: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x1cd2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1cd2e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD2E8u;
    SET_GPR_U32(ctx, 31, 0x1CD2F0u);
    ctx->pc = 0x1CD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2E8u;
    // 0x1cd2ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD2E8u, 0x1CD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2F0u;
label_1cd2f0:
    // 0x1cd2f0: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1cd2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cd2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2f8: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1CD2F8u;
    SET_GPR_U32(ctx, 31, 0x1CD300u);
    ctx->pc = 0x1CD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2F8u;
    // 0x1cd2fc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1CD2F8u, 0x1CD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD300u;
label_1cd300:
    // 0x1cd300: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cd304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd308: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD308u;
    SET_GPR_U32(ctx, 31, 0x1CD310u);
    ctx->pc = 0x1CD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD308u;
    // 0x1cd30c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD308u, 0x1CD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD310u;
label_1cd310:
    // 0x1cd310: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CD310u;
    SET_GPR_U32(ctx, 31, 0x1CD318u);
    ctx->pc = 0x1CD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD310u;
    // 0x1cd314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CD310u, 0x1CD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD318u;
label_1cd318:
    // 0x1cd318: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1CD318u;
    {
        const bool branch_taken_0x1cd318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd318) {
            ctx->pc = 0x1CD3C8u;
            return;
        }
    }
    ctx->pc = 0x1CD320u;
}
