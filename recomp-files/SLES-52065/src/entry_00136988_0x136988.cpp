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

// Function: entry_00136988
// Address: 0x136988 - 0x136a38
void entry_00136988_0x136988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136988_0x136988");
#endif

    switch (ctx->pc) {
        case 0x136990u: goto label_136990;
        case 0x13699cu: goto label_13699c;
        case 0x1369a4u: goto label_1369a4;
        case 0x1369acu: goto label_1369ac;
        case 0x1369bcu: goto label_1369bc;
        case 0x136a2cu: goto label_136a2c;
        case 0x136a34u: goto label_136a34;
        default: break;
    }

    ctx->pc = 0x136988u;

label_136988:
    // 0x136988: 0xc049e34  jal         func_1278D0
label_13698c:
    if (ctx->pc == 0x13698Cu) {
        ctx->pc = 0x136990u;
        goto label_136990;
    }
    ctx->pc = 0x136988u;
    SET_GPR_U32(ctx, 31, 0x136990u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136988u, 0x136990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136990u;
label_136990:
    // 0x136990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136994:
    // 0x136994: 0xc04a058  jal         func_128160
label_136998:
    if (ctx->pc == 0x136998u) {
        ctx->pc = 0x136998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136994u;
        // 0x136998: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13699Cu;
        goto label_13699c;
    }
    ctx->pc = 0x136994u;
    SET_GPR_U32(ctx, 31, 0x13699Cu);
    ctx->pc = 0x136998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136994u;
    // 0x136998: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x136994u, 0x13699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13699Cu;
label_13699c:
    // 0x13699c: 0xc061c5c  jal         func_187170
label_1369a0:
    if (ctx->pc == 0x1369A0u) {
        ctx->pc = 0x1369A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13699Cu;
        // 0x1369a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369A4u;
        goto label_1369a4;
    }
    ctx->pc = 0x13699Cu;
    SET_GPR_U32(ctx, 31, 0x1369A4u);
    ctx->pc = 0x1369A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13699Cu;
    // 0x1369a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x13699Cu, 0x1369A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369A4u;
label_1369a4:
    // 0x1369a4: 0xc061918  jal         func_186460
label_1369a8:
    if (ctx->pc == 0x1369A8u) {
        ctx->pc = 0x1369ACu;
        goto label_1369ac;
    }
    ctx->pc = 0x1369A4u;
    SET_GPR_U32(ctx, 31, 0x1369ACu);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x1369A4u, 0x1369ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369ACu;
label_1369ac:
    // 0x1369ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1369acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1369b0:
    // 0x1369b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1369b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1369b4:
    // 0x1369b4: 0xc061968  jal         func_1865A0
label_1369b8:
    if (ctx->pc == 0x1369B8u) {
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369B4u;
        // 0x1369b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369BCu;
        goto label_1369bc;
    }
    ctx->pc = 0x1369B4u;
    SET_GPR_U32(ctx, 31, 0x1369BCu);
    ctx->pc = 0x1369B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369B4u;
    // 0x1369b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x1369B4u, 0x1369BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369BCu;
label_1369bc:
    // 0x1369bc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1369bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1369c0:
    // 0x1369c0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1369c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1369c4:
    // 0x1369c4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1369c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_1369c8:
    // 0x1369c8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1369c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1369cc:
    // 0x1369cc: 0x24a56500  addiu       $a1, $a1, 0x6500
    ctx->pc = 0x1369ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
label_1369d0:
    // 0x1369d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1369d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1369d4:
    // 0x1369d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1369d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1369d8:
    // 0x1369d8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1369d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1369dc:
    // 0x1369dc: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1369dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_1369e0:
    // 0x1369e0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1369e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1369e4:
    // 0x1369e4: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_1369e8:
    // 0x1369e8: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1369e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_1369ec:
    // 0x1369ec: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1369ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_1369f0:
    // 0x1369f0: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1369f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1369f4:
    // 0x1369f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1369f8:
    // 0x1369f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1369f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1369fc:
    // 0x1369fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1369fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_136a00:
    // 0x136a00: 0x93828548  lbu         $v0, -0x7AB8($gp)
    ctx->pc = 0x136a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935880)));
label_136a04:
    // 0x136a04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_136a08:
    if (ctx->pc == 0x136A08u) {
        ctx->pc = 0x136A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A04u;
        // 0x136a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A0Cu;
        goto label_136a0c;
    }
    ctx->pc = 0x136A04u;
    {
        const bool branch_taken_0x136a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A04u;
        // 0x136a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a04) {
            ctx->pc = 0x136A38u;
            return;
        }
    }
    ctx->pc = 0x136A0Cu;
label_136a0c:
    // 0x136a0c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x136a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136a10:
    // 0x136a10: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_136a14:
    // 0x136a14: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x136a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_136a18:
    // 0x136a18: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x136a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_136a1c:
    // 0x136a1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136a20:
    // 0x136a20: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x136a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_136a24:
    // 0x136a24: 0x320f809  jalr        $t9
label_136a28:
    if (ctx->pc == 0x136A28u) {
        ctx->pc = 0x136A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A24u;
        // 0x136a28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A2Cu;
        goto label_136a2c;
    }
    ctx->pc = 0x136A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136A2Cu);
        ctx->pc = 0x136A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A24u;
        // 0x136a28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A24u, 0x136A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136A2Cu;
label_136a2c:
    // 0x136a2c: 0xc04dba4  jal         func_136E90
label_136a30:
    if (ctx->pc == 0x136A30u) {
        ctx->pc = 0x136A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A2Cu;
        // 0x136a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A34u;
        goto label_136a34;
    }
    ctx->pc = 0x136A2Cu;
    SET_GPR_U32(ctx, 31, 0x136A34u);
    ctx->pc = 0x136A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A2Cu;
    // 0x136a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136A2Cu, 0x136A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A34u;
label_136a34:
    // 0x136a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136a38u;
}
