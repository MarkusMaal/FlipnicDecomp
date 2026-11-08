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

// Function: entry_001a12e4
// Address: 0x1a12e4 - 0x1a1380
void entry_001a12e4_0x1a12e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a12e4_0x1a12e4");
#endif

    switch (ctx->pc) {
        case 0x1a12ecu: goto label_1a12ec;
        case 0x1a132cu: goto label_1a132c;
        case 0x1a1344u: goto label_1a1344;
        case 0x1a1378u: goto label_1a1378;
        default: break;
    }

    ctx->pc = 0x1a12e4u;

label_1a12e4:
    // 0x1a12e4: 0xc064ffc  jal         func_193FF0
label_1a12e8:
    if (ctx->pc == 0x1A12E8u) {
        ctx->pc = 0x1A12ECu;
        goto label_1a12ec;
    }
    ctx->pc = 0x1A12E4u;
    SET_GPR_U32(ctx, 31, 0x1A12ECu);
    ctx->pc = 0x193FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FF0u, 0x1A12E4u, 0x1A12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A12ECu;
label_1a12ec:
    // 0x1a12ec: 0x10400245  beqz        $v0, . + 4 + (0x245 << 2)
label_1a12f0:
    if (ctx->pc == 0x1A12F0u) {
        ctx->pc = 0x1A12F4u;
        goto label_1a12f4;
    }
    ctx->pc = 0x1A12ECu;
    {
        const bool branch_taken_0x1a12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12ec) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A12F4u;
label_1a12f4:
    // 0x1a12f4: 0x8e8206a4  lw          $v0, 0x6A4($s4)
    ctx->pc = 0x1a12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1700)));
label_1a12f8:
    // 0x1a12f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a12f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a12fc:
    // 0x1a12fc: 0xae820c78  sw          $v0, 0xC78($s4)
    ctx->pc = 0x1a12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3192), GPR_U32(ctx, 2));
label_1a1300:
    // 0x1a1300: 0xae800c7c  sw          $zero, 0xC7C($s4)
    ctx->pc = 0x1a1300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
label_1a1304:
    // 0x1a1304: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a1304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a1308:
    // 0x1a1308: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a130c:
    // 0x1a130c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a130cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a1310:
    // 0x1a1310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1314:
    // 0x1a1314: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a1318:
    // 0x1a1318: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a1318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a131c:
    // 0x1a131c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a131cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1320:
    // 0x1a1320: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1324:
    // 0x1a1324: 0x320f809  jalr        $t9
label_1a1328:
    if (ctx->pc == 0x1A1328u) {
        ctx->pc = 0x1A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1324u;
        // 0x1a1328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A132Cu;
        goto label_1a132c;
    }
    ctx->pc = 0x1A1324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A132Cu);
        ctx->pc = 0x1A1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1324u;
        // 0x1a1328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1324u, 0x1A132Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A132Cu;
label_1a132c:
    // 0x1a132c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a132cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1330:
    // 0x1a1330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1334:
    // 0x1a1334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1338:
    // 0x1a1338: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a133c:
    // 0x1a133c: 0x320f809  jalr        $t9
label_1a1340:
    if (ctx->pc == 0x1A1340u) {
        ctx->pc = 0x1A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A133Cu;
        // 0x1a1340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1344u;
        goto label_1a1344;
    }
    ctx->pc = 0x1A133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1344u);
        ctx->pc = 0x1A1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A133Cu;
        // 0x1a1340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A133Cu, 0x1A1344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1344u;
label_1a1344:
    // 0x1a1344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1348:
    // 0x1a1348: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x1a1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_1a134c:
    // 0x1a134c: 0xae830c7c  sw          $v1, 0xC7C($s4)
    ctx->pc = 0x1a134cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
label_1a1350:
    // 0x1a1350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a1350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a1354:
    // 0x1a1354: 0xa283068c  sb          $v1, 0x68C($s4)
    ctx->pc = 0x1a1354u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 3));
label_1a1358:
    // 0x1a1358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a135c:
    // 0x1a135c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1360:
    // 0x1a1360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a1364:
    // 0x1a1364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a1364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a1368:
    // 0x1a1368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a1368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a136c:
    // 0x1a136c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a136cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a1370:
    // 0x1a1370: 0xc063e14  jal         func_18F850
label_1a1374:
    if (ctx->pc == 0x1A1374u) {
        ctx->pc = 0x1A1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1370u;
        // 0x1a1374: 0xae820680  sw          $v0, 0x680($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1378u;
        goto label_1a1378;
    }
    ctx->pc = 0x1A1370u;
    SET_GPR_U32(ctx, 31, 0x1A1378u);
    ctx->pc = 0x1A1374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1370u;
    // 0x1a1374: 0xae820680  sw          $v0, 0x680($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1370u, 0x1A1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1378u;
label_1a1378:
    // 0x1a1378: 0x10000222  b           . + 4 + (0x222 << 2)
label_1a137c:
    if (ctx->pc == 0x1A137Cu) {
        ctx->pc = 0x1A1380u;
        goto label_fallthrough_0x1a1378;
    }
    ctx->pc = 0x1A1378u;
    {
        const bool branch_taken_0x1a1378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1378) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
label_fallthrough_0x1a1378:
    ctx->pc = 0x1A1380u;
}
