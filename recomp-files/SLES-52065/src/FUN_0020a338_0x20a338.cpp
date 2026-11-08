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

// Function: FUN_0020a338
// Address: 0x20a338 - 0x20a3f4
void FUN_0020a338_0x20a338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a338_0x20a338");
#endif

    switch (ctx->pc) {
        case 0x20a34cu: goto label_20a34c;
        default: break;
    }

    ctx->pc = 0x20a338u;

    // 0x20a338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a344: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x20A344u;
    SET_GPR_U32(ctx, 31, 0x20A34Cu);
    ctx->pc = 0x20A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A344u;
    // 0x20a348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x20A344u, 0x20A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A34Cu;
label_20a34c:
    // 0x20a34c: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x20a34cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x20a350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a354: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20A354u;
    {
        const bool branch_taken_0x20a354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A354u;
        // 0x20a358: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a354) {
            ctx->pc = 0x20A39Cu;
            goto label_20a39c;
        }
    }
    ctx->pc = 0x20A35Cu;
    // 0x20a35c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x20a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x20a360: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x20a360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x20a364: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x20a364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x20a368: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x20a368u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x20a36c: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x20a36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x20a370: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x20a370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x20a374: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x20a374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x20a378: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x20a378u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20a37c: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x20a37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
    // 0x20a380: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x20a380u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 5));
    // 0x20a384: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x20a384u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20a388: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x20a388u;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 2));
    // 0x20a38c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x20a38cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20a390: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x20a390u;
    runtime->Store64(rdram, ctx, 0x120000C0u, GPR_U64(ctx, 3));
    // 0x20a394: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20A394u;
    {
        const bool branch_taken_0x20a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A394u;
        // 0x20a398: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a394) {
            ctx->pc = 0x20A3E8u;
            goto label_20a3e8;
        }
    }
    ctx->pc = 0x20A39Cu;
label_20a39c:
    // 0x20a39c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x20a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3a0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3a4: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x20a3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3a8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x20a3a8u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 4));
    // 0x20a3ac: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x20a3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x20a3b0: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x20a3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    // 0x20a3b4: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3b8: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x20a3b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20a3bc: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x20a3bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x20a3c0: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x20a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x20a3c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x20a3c4u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x20a3c8: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x20a3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x20a3cc: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x20a3ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20a3d0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x20a3d0u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 2));
    // 0x20a3d4: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x20a3d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20a3d8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x20a3d8u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x20a3dc: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x20a3dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20a3e0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x20a3e0u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 2));
    // 0x20a3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a3e8:
    // 0x20a3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x20A3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3ECu;
        // 0x20a3f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A3F4u;
}
