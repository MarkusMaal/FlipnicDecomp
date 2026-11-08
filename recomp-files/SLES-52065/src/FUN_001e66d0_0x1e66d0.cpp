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

// Function: FUN_001e66d0
// Address: 0x1e66d0 - 0x1e69f8
void FUN_001e66d0_0x1e66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e66d0_0x1e66d0");
#endif

    switch (ctx->pc) {
        case 0x1e6720u: goto label_1e6720;
        case 0x1e67b8u: goto label_1e67b8;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e67ecu: goto label_1e67ec;
        case 0x1e6810u: goto label_1e6810;
        case 0x1e6820u: goto label_1e6820;
        case 0x1e6828u: goto label_1e6828;
        case 0x1e683cu: goto label_1e683c;
        case 0x1e6854u: goto label_1e6854;
        case 0x1e68d4u: goto label_1e68d4;
        case 0x1e68dcu: goto label_1e68dc;
        case 0x1e6908u: goto label_1e6908;
        case 0x1e692cu: goto label_1e692c;
        case 0x1e693cu: goto label_1e693c;
        case 0x1e6944u: goto label_1e6944;
        case 0x1e6958u: goto label_1e6958;
        case 0x1e6970u: goto label_1e6970;
        case 0x1e69d0u: goto label_1e69d0;
        case 0x1e69dcu: goto label_1e69dc;
        default: break;
    }

    ctx->pc = 0x1e66d0u;

    // 0x1e66d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e66d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e66d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1e66dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e66dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e66e0: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e66e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1e66e4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1e66e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e66e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e66e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e66ec: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1e66ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e66f0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1e66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1e66f4: 0xafdd0044  sw          $sp, 0x44($fp)
    ctx->pc = 0x1e66f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
    // 0x1e66f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e66fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6700: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6704: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1E6704u;
    {
        const bool branch_taken_0x1e6704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6704) {
            ctx->pc = 0x1E685Cu;
            goto label_1e685c;
        }
    }
    ctx->pc = 0x1E670Cu;
    // 0x1e670c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1e670cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e6710: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6710u;
    {
        const bool branch_taken_0x1e6710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6710) {
            ctx->pc = 0x1E6720u;
            goto label_1e6720;
        }
    }
    ctx->pc = 0x1E6718u;
    // 0x1e6718: 0xc078bfc  jal         func_1E2FF0
    ctx->pc = 0x1E6718u;
    SET_GPR_U32(ctx, 31, 0x1E6720u);
    ctx->pc = 0x1E2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2FF0u, 0x1E6718u, 0x1E6720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6720u;
label_1e6720:
    // 0x1e6720: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e6720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e6724: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6728: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e672c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E672Cu;
    {
        const bool branch_taken_0x1e672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E672Cu;
        // 0x1e6730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e672c) {
            ctx->pc = 0x1E673Cu;
            goto label_1e673c;
        }
    }
    ctx->pc = 0x1E6734u;
    // 0x1e6734: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1E6734u;
    {
        const bool branch_taken_0x1e6734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6734u;
        // 0x1e6738: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6734) {
            ctx->pc = 0x1E69DCu;
            goto label_1e69dc;
        }
    }
    ctx->pc = 0x1E673Cu;
label_1e673c:
    // 0x1e673c: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e673cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6740: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e6740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e6744: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1e6744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6748: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e674c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E674Cu;
    {
        const bool branch_taken_0x1e674c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e674c) {
            ctx->pc = 0x1E6760u;
            goto label_1e6760;
        }
    }
    ctx->pc = 0x1E6754u;
    // 0x1e6754: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6758: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e6758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e675c: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1e675cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_1e6760:
    // 0x1e6760: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x1e6760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x1e6764: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e6768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e676c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e6770: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1E6770u;
    {
        const bool branch_taken_0x1e6770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6770u;
        // 0x1e6774: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6770) {
            ctx->pc = 0x1E69E0u;
            goto label_1e69e0;
        }
    }
    ctx->pc = 0x1E6778u;
    // 0x1e6778: 0x27c20090  addiu       $v0, $fp, 0x90
    ctx->pc = 0x1e6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1e677c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e677cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1e6780: 0xafc200b0  sw          $v0, 0xB0($fp)
    ctx->pc = 0x1e6780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 176), GPR_U32(ctx, 2));
    // 0x1e6784: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e6784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e6788: 0x8fc200b0  lw          $v0, 0xB0($fp)
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e678c: 0x24a5c0c0  addiu       $a1, $a1, -0x3F40
    ctx->pc = 0x1e678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
    // 0x1e6790: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e6790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e6794: 0x2463c0b0  addiu       $v1, $v1, -0x3F50
    ctx->pc = 0x1e6794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951088));
    // 0x1e6798: 0x24843d30  addiu       $a0, $a0, 0x3D30
    ctx->pc = 0x1e6798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
    // 0x1e679c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e679cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1e67a0: 0x8fc200b0  lw          $v0, 0xB0($fp)
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e67a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e67a8: 0x8fc200b0  lw          $v0, 0xB0($fp)
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e67ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e67acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e67b0: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E67B0u;
    SET_GPR_U32(ctx, 31, 0x1E67B8u);
    ctx->pc = 0x1E67B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67B0u;
    // 0x1e67b4: 0xafc200b8  sw          $v0, 0xB8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E67B0u, 0x1E67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67B8u;
label_1e67b8:
    // 0x1e67b8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E67B8u;
    SET_GPR_U32(ctx, 31, 0x1E67C0u);
    ctx->pc = 0x1E67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67B8u;
    // 0x1e67bc: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E67B8u, 0x1E67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67C0u;
label_1e67c0:
    // 0x1e67c0: 0x8fc300b8  lw          $v1, 0xB8($fp)
    ctx->pc = 0x1e67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e67c8: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e67d0: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67d4: 0xafdd0064  sw          $sp, 0x64($fp)
    ctx->pc = 0x1e67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
    // 0x1e67d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e67dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E67DCu;
    {
        const bool branch_taken_0x1e67dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67DCu;
        // 0x1e67e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67dc) {
            ctx->pc = 0x1E6828u;
            goto label_1e6828;
        }
    }
    ctx->pc = 0x1E67E4u;
    // 0x1e67e4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E67E4u;
    SET_GPR_U32(ctx, 31, 0x1E67ECu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E67E4u, 0x1E67ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67ECu;
label_1e67ec:
    // 0x1e67ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E67ECu;
    {
        const bool branch_taken_0x1e67ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67ECu;
        // 0x1e67f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67ec) {
            ctx->pc = 0x1E67F8u;
            goto label_1e67f8;
        }
    }
    ctx->pc = 0x1E67F4u;
    // 0x1e67f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e67f8:
    // 0x1e67f8: 0x8fc300b8  lw          $v1, 0xB8($fp)
    ctx->pc = 0x1e67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E67FCu;
    {
        const bool branch_taken_0x1e67fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67FCu;
        // 0x1e6800: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67fc) {
            ctx->pc = 0x1E6828u;
            goto label_1e6828;
        }
    }
    ctx->pc = 0x1E6804u;
    // 0x1e6804: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e6804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e6808: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E6808u;
    SET_GPR_U32(ctx, 31, 0x1E6810u);
    ctx->pc = 0x1E680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6808u;
    // 0x1e680c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E6808u, 0x1E6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6810u;
label_1e6810:
    // 0x1e6810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6818: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E6818u;
    SET_GPR_U32(ctx, 31, 0x1E6820u);
    ctx->pc = 0x1E681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6818u;
    // 0x1e681c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E6818u, 0x1E6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6820u;
label_1e6820:
    // 0x1e6820: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E6820u;
    SET_GPR_U32(ctx, 31, 0x1E6828u);
    ctx->pc = 0x1E6824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6820u;
    // 0x1e6824: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E6820u, 0x1E6828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6828u;
label_1e6828:
    // 0x1e6828: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e6828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e682c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e682cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e6830: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6834: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E6834u;
    SET_GPR_U32(ctx, 31, 0x1E683Cu);
    ctx->pc = 0x1E6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6834u;
    // 0x1e6838: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E6834u, 0x1E683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E683Cu;
label_1e683c:
    // 0x1e683c: 0x8fc500b0  lw          $a1, 0xB0($fp)
    ctx->pc = 0x1e683cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 176)));
    // 0x1e6840: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e6840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e6844: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e6848: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x1e6848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    // 0x1e684c: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E684Cu;
    SET_GPR_U32(ctx, 31, 0x1E6854u);
    ctx->pc = 0x1E6850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E684Cu;
    // 0x1e6850: 0x24c61450  addiu       $a2, $a2, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E684Cu, 0x1E6854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6854u;
label_1e6854:
    // 0x1e6854: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1E6854u;
    {
        const bool branch_taken_0x1e6854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6854) {
            ctx->pc = 0x1E69DCu;
            goto label_1e69dc;
        }
    }
    ctx->pc = 0x1E685Cu;
label_1e685c:
    // 0x1e685c: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e685cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6860: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e6860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e6864: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1e6864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6868: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e686c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E686Cu;
    {
        const bool branch_taken_0x1e686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e686c) {
            ctx->pc = 0x1E6880u;
            goto label_1e6880;
        }
    }
    ctx->pc = 0x1E6874u;
    // 0x1e6874: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6878: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e6878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e687c: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1e687cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
label_1e6880:
    // 0x1e6880: 0x9083003b  lbu         $v1, 0x3B($a0)
    ctx->pc = 0x1e6880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 59)));
    // 0x1e6884: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6888: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e6888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e688c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e688cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e6890: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1E6890u;
    {
        const bool branch_taken_0x1e6890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6890u;
        // 0x1e6894: 0x27c200a0  addiu       $v0, $fp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6890) {
            ctx->pc = 0x1E69DCu;
            goto label_1e69dc;
        }
    }
    ctx->pc = 0x1E6898u;
    // 0x1e6898: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e6898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x1e689c: 0xafc200b4  sw          $v0, 0xB4($fp)
    ctx->pc = 0x1e689cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 180), GPR_U32(ctx, 2));
    // 0x1e68a0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e68a4: 0x8fc200b4  lw          $v0, 0xB4($fp)
    ctx->pc = 0x1e68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e68a8: 0x24a5c0c0  addiu       $a1, $a1, -0x3F40
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
    // 0x1e68ac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e68acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e68b0: 0x2463c0b0  addiu       $v1, $v1, -0x3F50
    ctx->pc = 0x1e68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951088));
    // 0x1e68b4: 0x24843d30  addiu       $a0, $a0, 0x3D30
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
    // 0x1e68b8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1e68bc: 0x8fc200b4  lw          $v0, 0xB4($fp)
    ctx->pc = 0x1e68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e68c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e68c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e68c4: 0x8fc200b4  lw          $v0, 0xB4($fp)
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e68c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1e68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e68cc: 0xc080748  jal         func_201D20
    ctx->pc = 0x1E68CCu;
    SET_GPR_U32(ctx, 31, 0x1E68D4u);
    ctx->pc = 0x1E68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68CCu;
    // 0x1e68d0: 0xafc200bc  sw          $v0, 0xBC($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1E68CCu, 0x1E68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68D4u;
label_1e68d4:
    // 0x1e68d4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1E68D4u;
    SET_GPR_U32(ctx, 31, 0x1E68DCu);
    ctx->pc = 0x1E68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E68D4u;
    // 0x1e68d8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1E68D4u, 0x1E68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E68DCu;
label_1e68dc:
    // 0x1e68dc: 0x8fc300bc  lw          $v1, 0xBC($fp)
    ctx->pc = 0x1e68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e68e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e68e4: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e68e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e68ec: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e68f0: 0xafdd0084  sw          $sp, 0x84($fp)
    ctx->pc = 0x1e68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
    // 0x1e68f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e68f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E68F8u;
    {
        const bool branch_taken_0x1e68f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E68F8u;
        // 0x1e68fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e68f8) {
            ctx->pc = 0x1E6944u;
            goto label_1e6944;
        }
    }
    ctx->pc = 0x1E6900u;
    // 0x1e6900: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E6900u;
    SET_GPR_U32(ctx, 31, 0x1E6908u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E6900u, 0x1E6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6908u;
label_1e6908:
    // 0x1e6908: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6908u;
    {
        const bool branch_taken_0x1e6908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6908u;
        // 0x1e690c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6908) {
            ctx->pc = 0x1E6914u;
            goto label_1e6914;
        }
    }
    ctx->pc = 0x1E6910u;
    // 0x1e6910: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e6910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e6914:
    // 0x1e6914: 0x8fc300bc  lw          $v1, 0xBC($fp)
    ctx->pc = 0x1e6914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e6918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E6918u;
    {
        const bool branch_taken_0x1e6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6918u;
        // 0x1e691c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6918) {
            ctx->pc = 0x1E6944u;
            goto label_1e6944;
        }
    }
    ctx->pc = 0x1E6920u;
    // 0x1e6920: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e6924: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E6924u;
    SET_GPR_U32(ctx, 31, 0x1E692Cu);
    ctx->pc = 0x1E6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6924u;
    // 0x1e6928: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E6924u, 0x1E692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E692Cu;
label_1e692c:
    // 0x1e692c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6934: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E6934u;
    SET_GPR_U32(ctx, 31, 0x1E693Cu);
    ctx->pc = 0x1E6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6934u;
    // 0x1e6938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E6934u, 0x1E693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E693Cu;
label_1e693c:
    // 0x1e693c: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E693Cu;
    SET_GPR_U32(ctx, 31, 0x1E6944u);
    ctx->pc = 0x1E6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E693Cu;
    // 0x1e6940: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E693Cu, 0x1E6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6944u;
label_1e6944:
    // 0x1e6944: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e6948: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e694c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6950: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E6950u;
    SET_GPR_U32(ctx, 31, 0x1E6958u);
    ctx->pc = 0x1E6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6950u;
    // 0x1e6954: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E6950u, 0x1E6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6958u;
label_1e6958:
    // 0x1e6958: 0x8fc500b4  lw          $a1, 0xB4($fp)
    ctx->pc = 0x1e6958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e695c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e695cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e6960: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e6964: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x1e6964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    // 0x1e6968: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E6968u;
    SET_GPR_U32(ctx, 31, 0x1E6970u);
    ctx->pc = 0x1E696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6968u;
    // 0x1e696c: 0x24c61450  addiu       $a2, $a2, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E6968u, 0x1E6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6970u;
label_1e6970:
    // 0x1e6970: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E6970u;
    {
        const bool branch_taken_0x1e6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6970) {
            ctx->pc = 0x1E69DCu;
            goto label_1e69dc;
        }
    }
    ctx->pc = 0x1E6978u;
    // 0x1e6978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e6978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e697c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6980: 0x2444003a  addiu       $a0, $v0, 0x3A
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x1e6984: 0x9042003a  lbu         $v0, 0x3A($v0)
    ctx->pc = 0x1e6984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1e6988: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e6988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e698c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e6990: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e6990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e6994: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6994u;
    {
        const bool branch_taken_0x1e6994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6994u;
        // 0x1e6998: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6994) {
            ctx->pc = 0x1E69A0u;
            goto label_1e69a0;
        }
    }
    ctx->pc = 0x1E699Cu;
    // 0x1e699c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1e699cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e69a0:
    // 0x1e69a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e69a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e69a8: 0x9043003a  lbu         $v1, 0x3A($v0)
    ctx->pc = 0x1e69a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1e69ac: 0x9042003b  lbu         $v0, 0x3B($v0)
    ctx->pc = 0x1e69acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
    // 0x1e69b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e69b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e69b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e69b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e69b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E69B8u;
    {
        const bool branch_taken_0x1e69b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69B8u;
        // 0x1e69bc: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69b8) {
            ctx->pc = 0x1E69D4u;
            goto label_1e69d4;
        }
    }
    ctx->pc = 0x1E69C0u;
    // 0x1e69c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e69c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e69c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69c8: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E69C8u;
    SET_GPR_U32(ctx, 31, 0x1E69D0u);
    ctx->pc = 0x1E69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69C8u;
    // 0x1e69cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E69C8u, 0x1E69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69D0u;
label_1e69d0:
    // 0x1e69d0: 0x27c40030  addiu       $a0, $fp, 0x30
    ctx->pc = 0x1e69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_1e69d4:
    // 0x1e69d4: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E69D4u;
    SET_GPR_U32(ctx, 31, 0x1E69DCu);
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E69D4u, 0x1E69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69DCu;
label_1e69dc:
    // 0x1e69dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e69dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e69e0:
    // 0x1e69e0: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e69e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e69e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e69e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e69e8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e69e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e69ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e69ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e69f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E69F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69F0u;
        // 0x1e69f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E69F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E69F8u;
}
