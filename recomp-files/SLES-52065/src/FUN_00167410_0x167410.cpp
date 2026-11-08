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

// Function: FUN_00167410
// Address: 0x167410 - 0x167518
void FUN_00167410_0x167410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167410_0x167410");
#endif

    switch (ctx->pc) {
        case 0x167424u: goto label_167424;
        case 0x1674a4u: goto label_1674a4;
        case 0x1674b4u: goto label_1674b4;
        case 0x1674c4u: goto label_1674c4;
        case 0x1674e0u: goto label_1674e0;
        case 0x1674fcu: goto label_1674fc;
        default: break;
    }

    ctx->pc = 0x167410u;

    // 0x167410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16741c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x16741Cu;
    SET_GPR_U32(ctx, 31, 0x167424u);
    ctx->pc = 0x167420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16741Cu;
    // 0x167420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16741Cu, 0x167424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167424u;
label_167424:
    // 0x167424: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x167424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
    // 0x167428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16742c: 0x80820024  lb          $v0, 0x24($a0)
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x167430: 0xa6020224  sh          $v0, 0x224($s0)
    ctx->pc = 0x167430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
    // 0x167434: 0x86020224  lh          $v0, 0x224($s0)
    ctx->pc = 0x167434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x167438: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167438u;
    {
        const bool branch_taken_0x167438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167438u;
        // 0x16743c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167438) {
            ctx->pc = 0x167444u;
            goto label_167444;
        }
    }
    ctx->pc = 0x167440u;
    // 0x167440: 0xa6020224  sh          $v0, 0x224($s0)
    ctx->pc = 0x167440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
label_167444:
    // 0x167444: 0x86030224  lh          $v1, 0x224($s0)
    ctx->pc = 0x167444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x167448: 0x240207f8  addiu       $v0, $zero, 0x7F8
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x16744c: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x16744cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
    // 0x167450: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x167450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x167454: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x167454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x167458: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x167458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x16745c: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x16745cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x167460: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167460u;
    {
        const bool branch_taken_0x167460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x167464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167460u;
        // 0x167464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167460) {
            ctx->pc = 0x16746Cu;
            goto label_16746c;
        }
    }
    ctx->pc = 0x167468u;
    // 0x167468: 0xa6020222  sh          $v0, 0x222($s0)
    ctx->pc = 0x167468u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
label_16746c:
    // 0x16746c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x16746cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x167470: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x167470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x167474: 0x80820022  lb          $v0, 0x22($a0)
    ctx->pc = 0x167474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x167478: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x167478u;
    {
        const bool branch_taken_0x167478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167478u;
        // 0x16747c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167478) {
            ctx->pc = 0x1674BCu;
            goto label_1674bc;
        }
    }
    ctx->pc = 0x167480u;
    // 0x167480: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x167480u;
    {
        const bool branch_taken_0x167480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x167484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167480u;
        // 0x167484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167480) {
            ctx->pc = 0x1674ACu;
            goto label_1674ac;
        }
    }
    ctx->pc = 0x167488u;
    // 0x167488: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x167488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x16748c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16748Cu;
    {
        const bool branch_taken_0x16748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x167490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16748Cu;
        // 0x167490: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16748c) {
            ctx->pc = 0x16749Cu;
            goto label_16749c;
        }
    }
    ctx->pc = 0x167494u;
    // 0x167494: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x167494u;
    {
        const bool branch_taken_0x167494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167494) {
            ctx->pc = 0x1674C4u;
            goto label_1674c4;
        }
    }
    ctx->pc = 0x16749Cu;
label_16749c:
    // 0x16749c: 0xc054810  jal         func_152040
    ctx->pc = 0x16749Cu;
    SET_GPR_U32(ctx, 31, 0x1674A4u);
    ctx->pc = 0x152040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152040u, 0x16749Cu, 0x1674A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674A4u;
label_1674a4:
    // 0x1674a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1674A4u;
    {
        const bool branch_taken_0x1674a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1674a4) {
            ctx->pc = 0x1674C4u;
            goto label_1674c4;
        }
    }
    ctx->pc = 0x1674ACu;
label_1674ac:
    // 0x1674ac: 0xc054810  jal         func_152040
    ctx->pc = 0x1674ACu;
    SET_GPR_U32(ctx, 31, 0x1674B4u);
    ctx->pc = 0x152040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152040u, 0x1674ACu, 0x1674B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674B4u;
label_1674b4:
    // 0x1674b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1674B4u;
    {
        const bool branch_taken_0x1674b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1674b4) {
            ctx->pc = 0x1674C4u;
            goto label_1674c4;
        }
    }
    ctx->pc = 0x1674BCu;
label_1674bc:
    // 0x1674bc: 0xc054810  jal         func_152040
    ctx->pc = 0x1674BCu;
    SET_GPR_U32(ctx, 31, 0x1674C4u);
    ctx->pc = 0x1674C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674BCu;
    // 0x1674c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152040u, 0x1674BCu, 0x1674C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674C4u;
label_1674c4:
    // 0x1674c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1674C4u;
    {
        const bool branch_taken_0x1674c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1674c4) {
            ctx->pc = 0x1674E8u;
            goto label_1674e8;
        }
    }
    ctx->pc = 0x1674CCu;
    // 0x1674cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1674ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1674d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1674d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1674d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1674d8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1674D8u;
    SET_GPR_U32(ctx, 31, 0x1674E0u);
    ctx->pc = 0x1674DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674D8u;
    // 0x1674dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1674D8u, 0x1674E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674E0u;
label_1674e0:
    // 0x1674e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1674E0u;
    {
        const bool branch_taken_0x1674e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674E0u;
        // 0x1674e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674e0) {
            ctx->pc = 0x16750Cu;
            goto label_16750c;
        }
    }
    ctx->pc = 0x1674E8u;
label_1674e8:
    // 0x1674e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1674e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1674ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1674ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1674f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1674f4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1674F4u;
    SET_GPR_U32(ctx, 31, 0x1674FCu);
    ctx->pc = 0x1674F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674F4u;
    // 0x1674f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1674F4u, 0x1674FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674FCu;
label_1674fc:
    // 0x1674fc: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x167500: 0xa6030220  sh          $v1, 0x220($s0)
    ctx->pc = 0x167500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x167504: 0xa6000226  sh          $zero, 0x226($s0)
    ctx->pc = 0x167504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x167508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16750c:
    // 0x16750c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16750cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167510: 0x3e00008  jr          $ra
    ctx->pc = 0x167510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167510u;
        // 0x167514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167518u;
}
