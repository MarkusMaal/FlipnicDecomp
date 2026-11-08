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

// Function: FUN_001453b0
// Address: 0x1453b0 - 0x14551c
void FUN_001453b0_0x1453b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001453b0_0x1453b0");
#endif

    switch (ctx->pc) {
        case 0x145404u: goto label_145404;
        case 0x145428u: goto label_145428;
        case 0x1454b0u: goto label_1454b0;
        case 0x1454bcu: goto label_1454bc;
        case 0x1454ccu: goto label_1454cc;
        case 0x1454d4u: goto label_1454d4;
        default: break;
    }

    ctx->pc = 0x1453b0u;

    // 0x1453b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1453b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1453b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1453b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1453b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1453b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1453bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1453bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1453c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1453c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1453c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1453c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1453c8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1453c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1453cc: 0x10c0004c  beqz        $a2, . + 4 + (0x4C << 2)
    ctx->pc = 0x1453CCu;
    {
        const bool branch_taken_0x1453cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1453D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453CCu;
        // 0x1453d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453cc) {
            ctx->pc = 0x145500u;
            goto label_145500;
        }
    }
    ctx->pc = 0x1453D4u;
    // 0x1453d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1453d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1453d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1453d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1453dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1453dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1453e0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1453e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1453e4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1453E4u;
    {
        const bool branch_taken_0x1453e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1453e4) {
            ctx->pc = 0x14540Cu;
            goto label_14540c;
        }
    }
    ctx->pc = 0x1453ECu;
    // 0x1453ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1453ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1453f0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1453f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1453f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1453f8: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1453f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1453fc: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1453FCu;
    SET_GPR_U32(ctx, 31, 0x145404u);
    ctx->pc = 0x145400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453FCu;
    // 0x145400: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1453FCu, 0x145404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145404u;
label_145404:
    // 0x145404: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x145404u;
    {
        const bool branch_taken_0x145404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145404u;
        // 0x145408: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145404) {
            ctx->pc = 0x14542Cu;
            goto label_14542c;
        }
    }
    ctx->pc = 0x14540Cu;
label_14540c:
    // 0x14540c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x14540cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145410: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x145410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145414: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x145414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x145418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14541c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x14541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x145420: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x145420u;
    SET_GPR_U32(ctx, 31, 0x145428u);
    ctx->pc = 0x145424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145420u;
    // 0x145424: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x145420u, 0x145428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145428u;
label_145428:
    // 0x145428: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x145428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_14542c:
    // 0x14542c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x14542cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x145430: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x145430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x145434: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x145438: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x145438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x14543c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14543cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x145440: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x145440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x145444: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x145444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x145448: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14544c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x145450: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x145450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x145454: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x145454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145458: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14545c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x145460: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x145460u;
    {
        const bool branch_taken_0x145460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x145464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145460u;
        // 0x145464: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145460) {
            ctx->pc = 0x145480u;
            goto label_145480;
        }
    }
    ctx->pc = 0x145468u;
    // 0x145468: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14546c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145470: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x145474: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14547c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x14547cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_145480:
    // 0x145480: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x145480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x145484: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x145484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145488: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x145488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14548c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145490: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x145490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x145494: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x145494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x145498: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x145498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14549c: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x14549cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1454a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1454a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1454a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1454a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1454a8: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x1454A8u;
    SET_GPR_U32(ctx, 31, 0x1454B0u);
    ctx->pc = 0x1454ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454A8u;
    // 0x1454ac: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x1454A8u, 0x1454B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454B0u;
label_1454b0:
    // 0x1454b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1454b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1454b4: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x1454B4u;
    SET_GPR_U32(ctx, 31, 0x1454BCu);
    ctx->pc = 0x1454B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454B4u;
    // 0x1454b8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x1454B4u, 0x1454BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454BCu;
label_1454bc:
    // 0x1454bc: 0x8fb20064  lw          $s2, 0x64($sp)
    ctx->pc = 0x1454bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1454c0: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1454c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1454c4: 0x1250000e  beq         $s2, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1454C4u;
    {
        const bool branch_taken_0x1454c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x1454C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454C4u;
        // 0x1454c8: 0x8fb10060  lw          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454c4) {
            ctx->pc = 0x145500u;
            goto label_145500;
        }
    }
    ctx->pc = 0x1454CCu;
label_1454cc:
    // 0x1454cc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1454CCu;
    SET_GPR_U32(ctx, 31, 0x1454D4u);
    ctx->pc = 0x1454D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454CCu;
    // 0x1454d0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1454CCu, 0x1454D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454D4u;
label_1454d4:
    // 0x1454d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1454d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1454d8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1454d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1454dc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1454dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1454e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1454e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1454e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1454e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1454e8: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1454E8u;
    {
        const bool branch_taken_0x1454e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1454ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454E8u;
        // 0x1454ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454e8) {
            ctx->pc = 0x1454F4u;
            goto label_1454f4;
        }
    }
    ctx->pc = 0x1454F0u;
    // 0x1454f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1454f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1454f4:
    // 0x1454f4: 0x0  nop
    ctx->pc = 0x1454f4u;
    // NOP
    // 0x1454f8: 0x1650fff4  bne         $s2, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1454F8u;
    {
        const bool branch_taken_0x1454f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x1454f8) {
            ctx->pc = 0x1454CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1454cc;
        }
    }
    ctx->pc = 0x145500u;
label_145500:
    // 0x145500: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x145500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x145504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14550c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14550cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145514: 0x3e00008  jr          $ra
    ctx->pc = 0x145514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145514u;
        // 0x145518: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14551Cu;
}
