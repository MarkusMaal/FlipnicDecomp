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

// Function: entry_001f1268
// Address: 0x1f1268 - 0x1f12f4
void entry_001f1268_0x1f1268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1268_0x1f1268");
#endif

    switch (ctx->pc) {
        case 0x1f1288u: goto label_1f1288;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12ecu: goto label_1f12ec;
        default: break;
    }

    ctx->pc = 0x1f1268u;

    // 0x1f1268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f126c: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1f126cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1f1270: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1274: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1f1274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1f1278: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f1278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1f127c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f127cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1280: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1280u;
    SET_GPR_U32(ctx, 31, 0x1F1288u);
    ctx->pc = 0x1F1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1280u;
    // 0x1f1284: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1280u, 0x1F1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1288u;
label_1f1288:
    // 0x1f1288: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f128c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1290: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f1294: 0xae71e200  sw          $s1, -0x1E00($s3)
    ctx->pc = 0x1f1294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294959616), GPR_U32(ctx, 17));
    // 0x1f1298: 0x2450ee40  addiu       $s0, $v0, -0x11C0
    ctx->pc = 0x1f1298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1f129c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f129cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f12a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f12a4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1f12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1f12a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f12ac: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1f12acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1f12b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f12b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12b4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f12b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f12b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f12bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f12bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12c0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f12c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f12c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f12c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f12c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f12cc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F12CCu;
    SET_GPR_U32(ctx, 31, 0x1F12D4u);
    ctx->pc = 0x1F12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12CCu;
    // 0x1f12d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F12CCu, 0x1F12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12D4u;
label_1f12d4:
    // 0x1f12d4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F12D4u;
    {
        const bool branch_taken_0x1f12d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D4u;
        // 0x1f12d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d4) {
            ctx->pc = 0x1F12F4u;
            return;
        }
    }
    ctx->pc = 0x1F12DCu;
    // 0x1f12dc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F12DCu;
    SET_GPR_U32(ctx, 31, 0x1F12E4u);
    ctx->pc = 0x1F12E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12DCu;
    // 0x1f12e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F12DCu, 0x1F12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12E4u;
label_1f12e4:
    // 0x1f12e4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F12E4u;
    SET_GPR_U32(ctx, 31, 0x1F12ECu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F12E4u, 0x1F12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12ECu;
label_1f12ec:
    // 0x1f12ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F12ECu;
    {
        const bool branch_taken_0x1f12ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12ECu;
        // 0x1f12f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12ec) {
            ctx->pc = 0x1F132Cu;
            return;
        }
    }
    ctx->pc = 0x1F12F4u;
}
