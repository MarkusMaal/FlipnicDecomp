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

// Function: FUN_00201798
// Address: 0x201798 - 0x201820
void FUN_00201798_0x201798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201798_0x201798");
#endif

    switch (ctx->pc) {
        case 0x2017d8u: goto label_2017d8;
        case 0x201810u: goto label_201810;
        default: break;
    }

    ctx->pc = 0x201798u;

    // 0x201798: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x201798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x20179c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20179cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017a0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2017a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2017a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2017a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2017a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2017a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017ac: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2017acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2017b0: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x2017b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x2017b4: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x2017b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x2017b8: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x2017b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x2017bc: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x2017bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x2017c0: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x2017c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x2017c4: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x2017c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x2017c8: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x2017c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2017cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2017ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2017d0: 0xc080748  jal         func_201D20
    ctx->pc = 0x2017D0u;
    SET_GPR_U32(ctx, 31, 0x2017D8u);
    ctx->pc = 0x2017D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017D0u;
    // 0x2017d4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x2017D0u, 0x2017D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017D8u;
label_2017d8:
    // 0x2017d8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x2017d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x2017dc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2017dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2017e0: 0x8c86d9ac  lw          $a2, -0x2654($a0)
    ctx->pc = 0x2017e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x2017e4: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x2017e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2017e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017ec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2017ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2017f0: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x2017f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x2017f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2017f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017f8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2017f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x2017fc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2017fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x201800: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x201800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x201804: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x201804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x201808: 0xc081494  jal         func_205250
    ctx->pc = 0x201808u;
    SET_GPR_U32(ctx, 31, 0x201810u);
    ctx->pc = 0x20180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201808u;
    // 0x20180c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205250u, 0x201808u, 0x201810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201810u;
label_201810:
    // 0x201810: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x201810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201814: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x201814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201818: 0x3e00008  jr          $ra
    ctx->pc = 0x201818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201818u;
        // 0x20181c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201820u;
}
