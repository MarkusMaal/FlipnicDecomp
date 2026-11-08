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

// Function: FUN_00137450
// Address: 0x137450 - 0x13750c
void FUN_00137450_0x137450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137450_0x137450");
#endif

    switch (ctx->pc) {
        case 0x137484u: goto label_137484;
        case 0x1374e0u: goto label_1374e0;
        default: break;
    }

    ctx->pc = 0x137450u;

    // 0x137450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137454: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x137454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x137458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13745c: 0x24639070  addiu       $v1, $v1, -0x6F90
    ctx->pc = 0x13745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938736));
    // 0x137460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137468: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x137468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x13746c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x137470: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x137470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x137474: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x137474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x137478: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x137478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x13747c: 0xc04dd44  jal         func_137510
    ctx->pc = 0x13747Cu;
    SET_GPR_U32(ctx, 31, 0x137484u);
    ctx->pc = 0x137480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13747Cu;
    // 0x137480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137510u, 0x13747Cu, 0x137484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137484u;
label_137484:
    // 0x137484: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x137484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x137488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13748c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13748cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x137490: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x137490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x137494: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x137494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x137498: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x137498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13749c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x13749cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1374a0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374a4: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1374a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1374a8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374ac: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1374acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1374b0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374b4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1374b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1374b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374bc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1374bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1374c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374c4: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1374c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1374c8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374cc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1374ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1374d0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374d4: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1374d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1374d8: 0xc04dbd0  jal         func_136F40
    ctx->pc = 0x1374D8u;
    SET_GPR_U32(ctx, 31, 0x1374E0u);
    ctx->pc = 0x1374DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1374D8u;
    // 0x1374dc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F40u, 0x1374D8u, 0x1374E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1374E0u;
label_1374e0:
    // 0x1374e0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1374e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1374e8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1374ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1374f0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1374f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1374f8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1374f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1374fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1374fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137504: 0x3e00008  jr          $ra
    ctx->pc = 0x137504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137504u;
        // 0x137508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13750Cu;
}
