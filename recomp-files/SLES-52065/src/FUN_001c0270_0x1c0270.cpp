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

// Function: FUN_001c0270
// Address: 0x1c0270 - 0x1c0310
void FUN_001c0270_0x1c0270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0270_0x1c0270");
#endif

    switch (ctx->pc) {
        case 0x1c02c8u: goto label_1c02c8;
        case 0x1c02f0u: goto label_1c02f0;
        default: break;
    }

    ctx->pc = 0x1c0270u;

    // 0x1c0270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0274: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c027c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0280: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1c0280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1c0284: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C0284u;
    {
        const bool branch_taken_0x1c0284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0284u;
        // 0x1c0288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0284) {
            ctx->pc = 0x1C0304u;
            goto label_1c0304;
        }
    }
    ctx->pc = 0x1C028Cu;
    // 0x1c028c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0290: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C0290u;
    {
        const bool branch_taken_0x1c0290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0290u;
        // 0x1c0294: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0290) {
            ctx->pc = 0x1C02E8u;
            goto label_1c02e8;
        }
    }
    ctx->pc = 0x1C0298u;
    // 0x1c0298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c029c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C029Cu;
    {
        const bool branch_taken_0x1c029c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C029Cu;
        // 0x1c02a0: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c029c) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C02A4u;
    // 0x1c02a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C02A4u;
    {
        const bool branch_taken_0x1c02a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c02a4) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C02ACu;
    // 0x1c02ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C02ACu;
    {
        const bool branch_taken_0x1c02ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c02ac) {
            ctx->pc = 0x1C0300u;
            goto label_1c0300;
        }
    }
    ctx->pc = 0x1C02B4u;
label_1c02b4:
    // 0x1c02b4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C02B4u;
    {
        const bool branch_taken_0x1c02b4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02B4u;
        // 0x1c02b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02b4) {
            ctx->pc = 0x1C02C0u;
            goto label_1c02c0;
        }
    }
    ctx->pc = 0x1C02BCu;
    // 0x1c02bc: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1c02bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1c02c0:
    // 0x1c02c0: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C02C0u;
    SET_GPR_U32(ctx, 31, 0x1C02C8u);
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C02C0u, 0x1C02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02C8u;
label_1c02c8:
    // 0x1c02c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c02c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c02cc: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1c02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1c02d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C02D0u;
    {
        const bool branch_taken_0x1c02d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02D0u;
        // 0x1c02d4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02d0) {
            ctx->pc = 0x1C02E0u;
            goto label_1c02e0;
        }
    }
    ctx->pc = 0x1C02D8u;
    // 0x1c02d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c02dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c02dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c02e0:
    // 0x1c02e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C02E0u;
    {
        const bool branch_taken_0x1c02e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02E0u;
        // 0x1c02e4: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02e0) {
            ctx->pc = 0x1C0304u;
            goto label_1c0304;
        }
    }
    ctx->pc = 0x1C02E8u;
label_1c02e8:
    // 0x1c02e8: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C02E8u;
    SET_GPR_U32(ctx, 31, 0x1C02F0u);
    ctx->pc = 0x1C02ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02E8u;
    // 0x1c02ec: 0x8c24f4f0  lw          $a0, -0xB10($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C02E8u, 0x1C02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02F0u;
label_1c02f0:
    // 0x1c02f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c02f4: 0x8c22f4f0  lw          $v0, -0xB10($at)
    ctx->pc = 0x1c02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4F0u));
    // 0x1c02f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C02F8u;
    {
        const bool branch_taken_0x1c02f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02F8u;
        // 0x1c02fc: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02f8) {
            ctx->pc = 0x1C0304u;
            goto label_1c0304;
        }
    }
    ctx->pc = 0x1C0300u;
label_1c0300:
    // 0x1c0300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c0300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c0304:
    // 0x1c0304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0308: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0310u;
}
