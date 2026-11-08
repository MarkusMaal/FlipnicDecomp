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

// Function: entry_001351f8
// Address: 0x1351f8 - 0x135328
void entry_001351f8_0x1351f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001351f8_0x1351f8");
#endif

    switch (ctx->pc) {
        case 0x13522cu: goto label_13522c;
        case 0x1352f8u: goto label_1352f8;
        case 0x135308u: goto label_135308;
        default: break;
    }

    ctx->pc = 0x1351f8u;

    // 0x1351f8: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1351f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1351fc: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1351FCu;
    {
        const bool branch_taken_0x1351fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351FCu;
        // 0x135200: 0x26440058  addiu       $a0, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351fc) {
            ctx->pc = 0x135474u;
            return;
        }
    }
    ctx->pc = 0x135204u;
    // 0x135204: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x135204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x135208: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x135208u;
    {
        const bool branch_taken_0x135208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135208) {
            ctx->pc = 0x135470u;
            return;
        }
    }
    ctx->pc = 0x135210u;
    // 0x135210: 0x8f82853c  lw          $v0, -0x7AC4($gp)
    ctx->pc = 0x135210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
    // 0x135214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135218: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x135218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
    // 0x13521c: 0x8f82853c  lw          $v0, -0x7AC4($gp)
    ctx->pc = 0x13521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935868)));
    // 0x135220: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x135220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x135224: 0xc04d76c  jal         func_135DB0
    ctx->pc = 0x135224u;
    SET_GPR_U32(ctx, 31, 0x13522Cu);
    ctx->pc = 0x135228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135224u;
    // 0x135228: 0xaf82853c  sw          $v0, -0x7AC4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DB0u, 0x135224u, 0x13522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13522Cu;
label_13522c:
    // 0x13522c: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x13522Cu;
    {
        const bool branch_taken_0x13522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13522c) {
            ctx->pc = 0x135530u;
            return;
        }
    }
    ctx->pc = 0x135234u;
    // 0x135234: 0x8e4a0088  lw          $t2, 0x88($s2)
    ctx->pc = 0x135234u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x135238: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x135238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13523c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x13523cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x135240: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x135240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x135244: 0x34470404  ori         $a3, $v0, 0x404
    ctx->pc = 0x135244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x135248: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x135248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13524c: 0x3c026c0c  lui         $v0, 0x6C0C
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27660 << 16));
    // 0x135250: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x135250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x135254: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x135254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x135258: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x135258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x13525c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x13525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x135260: 0xa1490003  sb          $t1, 0x3($t2)
    ctx->pc = 0x135260u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x135264: 0x3445801b  ori         $a1, $v0, 0x801B
    ctx->pc = 0x135264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32795);
    // 0x135268: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x135268u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13526c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135270: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x135270u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x135274: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x135274u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x135278: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x135278u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x13527c: 0xad46000c  sw          $a2, 0xC($t2)
    ctx->pc = 0x13527cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 6));
    // 0x135280: 0x8e460088  lw          $a2, 0x88($s2)
    ctx->pc = 0x135280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x135284: 0xa0c900d3  sb          $t1, 0xD3($a2)
    ctx->pc = 0x135284u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 211), (uint8_t)GPR_U32(ctx, 9));
    // 0x135288: 0xa0c000d2  sb          $zero, 0xD2($a2)
    ctx->pc = 0x135288u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 210), (uint8_t)GPR_U32(ctx, 0));
    // 0x13528c: 0xacc000d4  sw          $zero, 0xD4($a2)
    ctx->pc = 0x13528cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 212), GPR_U32(ctx, 0));
    // 0x135290: 0xa4d000d0  sh          $s0, 0xD0($a2)
    ctx->pc = 0x135290u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 208), (uint16_t)GPR_U32(ctx, 16));
    // 0x135294: 0xacc700d8  sw          $a3, 0xD8($a2)
    ctx->pc = 0x135294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 7));
    // 0x135298: 0xacc500dc  sw          $a1, 0xDC($a2)
    ctx->pc = 0x135298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 5));
    // 0x13529c: 0x8e460088  lw          $a2, 0x88($s2)
    ctx->pc = 0x13529cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1352a0: 0x8f8584dc  lw          $a1, -0x7B24($gp)
    ctx->pc = 0x1352a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935772)));
    // 0x1352a4: 0x24ca00f0  addiu       $t2, $a2, 0xF0
    ctx->pc = 0x1352a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x1352a8: 0xa0c900f3  sb          $t1, 0xF3($a2)
    ctx->pc = 0x1352a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 243), (uint8_t)GPR_U32(ctx, 9));
    // 0x1352ac: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1352acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1352b0: 0xa0c000f2  sb          $zero, 0xF2($a2)
    ctx->pc = 0x1352b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 242), (uint8_t)GPR_U32(ctx, 0));
    // 0x1352b4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1352b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1352b8: 0xacc000f4  sw          $zero, 0xF4($a2)
    ctx->pc = 0x1352b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
    // 0x1352bc: 0xa4c000f0  sh          $zero, 0xF0($a2)
    ctx->pc = 0x1352bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 240), (uint16_t)GPR_U32(ctx, 0));
    // 0x1352c0: 0xacc000f8  sw          $zero, 0xF8($a2)
    ctx->pc = 0x1352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 0));
    // 0x1352c4: 0xacc400fc  sw          $a0, 0xFC($a2)
    ctx->pc = 0x1352c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 4));
    // 0x1352c8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1352c8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1352cc: 0xa1430003  sb          $v1, 0x3($t2)
    ctx->pc = 0x1352ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1352d0: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x1352d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x1352d4: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x1352d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1352d8: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x1352d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x1352dc: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x1352dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x1352e0: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1352e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1352e4: 0x8c830170  lw          $v1, 0x170($a0)
    ctx->pc = 0x1352e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x1352e8: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1352E8u;
    {
        const bool branch_taken_0x1352e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1352e8) {
            ctx->pc = 0x13536Cu;
            return;
        }
    }
    ctx->pc = 0x1352F0u;
    // 0x1352f0: 0xc061c6c  jal         func_1871B0
    ctx->pc = 0x1352F0u;
    SET_GPR_U32(ctx, 31, 0x1352F8u);
    ctx->pc = 0x1352F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352F0u;
    // 0x1352f4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871B0u, 0x1352F0u, 0x1352F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352F8u;
label_1352f8:
    // 0x1352f8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1352f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1352fc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1352fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x135300: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x135300u;
    SET_GPR_U32(ctx, 31, 0x135308u);
    ctx->pc = 0x135304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135300u;
    // 0x135304: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x135300u, 0x135308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135308u;
label_135308:
    // 0x135308: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x135308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x13530c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x135310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135310u;
    {
        const bool branch_taken_0x135310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135310) {
            ctx->pc = 0x135328u;
            return;
        }
    }
    ctx->pc = 0x135318u;
    // 0x135318: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x135318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x13531c: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x13531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135320: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x135320u;
    SET_GPR_U32(ctx, 31, 0x135328u);
    ctx->pc = 0x135324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135320u;
    // 0x135324: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871D0u, 0x135320u, 0x135328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135328u;
}
