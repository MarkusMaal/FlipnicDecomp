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

// Function: FUN_001b5380
// Address: 0x1b5380 - 0x1b5414
void FUN_001b5380_0x1b5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5380_0x1b5380");
#endif

    switch (ctx->pc) {
        case 0x1b539cu: goto label_1b539c;
        case 0x1b53c4u: goto label_1b53c4;
        case 0x1b53d0u: goto label_1b53d0;
        case 0x1b53dcu: goto label_1b53dc;
        case 0x1b53e4u: goto label_1b53e4;
        case 0x1b53ecu: goto label_1b53ec;
        case 0x1b53f8u: goto label_1b53f8;
        default: break;
    }

    ctx->pc = 0x1b5380u;

    // 0x1b5380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b538c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1b538cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1b5390: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1b5390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b5394: 0xc045c98  jal         func_117260
    ctx->pc = 0x1B5394u;
    SET_GPR_U32(ctx, 31, 0x1B539Cu);
    ctx->pc = 0x1B5398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5394u;
    // 0x1b5398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1B5394u, 0x1B539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B539Cu;
label_1b539c:
    // 0x1b539c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1b539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1b53a0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1b53a4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1b53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1b53a8: 0x2463b900  addiu       $v1, $v1, -0x4700
    ctx->pc = 0x1b53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949120));
    // 0x1b53ac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b53acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1b53b0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b53b4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1b53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1b53b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b53bc: 0xc06e060  jal         func_1B8180
    ctx->pc = 0x1B53BCu;
    SET_GPR_U32(ctx, 31, 0x1B53C4u);
    ctx->pc = 0x1B53C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53BCu;
    // 0x1b53c0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8180u, 0x1B53BCu, 0x1B53C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53C4u;
label_1b53c4:
    // 0x1b53c4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b53c8: 0xc06d77c  jal         func_1B5DF0
    ctx->pc = 0x1B53C8u;
    SET_GPR_U32(ctx, 31, 0x1B53D0u);
    ctx->pc = 0x1B53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53C8u;
    // 0x1b53cc: 0x24440038  addiu       $a0, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5DF0u, 0x1B53C8u, 0x1B53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53D0u;
label_1b53d0:
    // 0x1b53d0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b53d4: 0xc06f8bc  jal         func_1BE2F0
    ctx->pc = 0x1B53D4u;
    SET_GPR_U32(ctx, 31, 0x1B53DCu);
    ctx->pc = 0x1B53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53D4u;
    // 0x1b53d8: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE2F0u, 0x1B53D4u, 0x1B53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53DCu;
label_1b53dc:
    // 0x1b53dc: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1B53DCu;
    SET_GPR_U32(ctx, 31, 0x1B53E4u);
    ctx->pc = 0x1B53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53DCu;
    // 0x1b53e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1B53DCu, 0x1B53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53E4u;
label_1b53e4:
    // 0x1b53e4: 0xc04d988  jal         func_136620
    ctx->pc = 0x1B53E4u;
    SET_GPR_U32(ctx, 31, 0x1B53ECu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1B53E4u, 0x1B53ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53ECu;
label_1b53ec:
    // 0x1b53ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b53ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b53f0: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1B53F0u;
    SET_GPR_U32(ctx, 31, 0x1B53F8u);
    ctx->pc = 0x1B53F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53F0u;
    // 0x1b53f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1B53F0u, 0x1B53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b53fc: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1b53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x1b5400: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b5400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b5404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b540c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B540Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B540Cu;
        // 0x1b5410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B540Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5414u;
}
