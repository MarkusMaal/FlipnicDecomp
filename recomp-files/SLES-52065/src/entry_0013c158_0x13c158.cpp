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

// Function: entry_0013c158
// Address: 0x13c158 - 0x13c240
void entry_0013c158_0x13c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c158_0x13c158");
#endif

    switch (ctx->pc) {
        case 0x13c16cu: goto label_13c16c;
        case 0x13c188u: goto label_13c188;
        case 0x13c22cu: goto label_13c22c;
        default: break;
    }

    ctx->pc = 0x13c158u;

    // 0x13c158: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c160: 0x245001bc  addiu       $s0, $v0, 0x1BC
    ctx->pc = 0x13c160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x13c164: 0xc049dd8  jal         func_127760
    ctx->pc = 0x13C164u;
    SET_GPR_U32(ctx, 31, 0x13C16Cu);
    ctx->pc = 0x13C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C164u;
    // 0x13c168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x13C164u, 0x13C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C16Cu;
label_13c16c:
    // 0x13c16c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13c170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c174: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13c174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13c178: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c17c: 0x245001c8  addiu       $s0, $v0, 0x1C8
    ctx->pc = 0x13c17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x13c180: 0xc049dd8  jal         func_127760
    ctx->pc = 0x13C180u;
    SET_GPR_U32(ctx, 31, 0x13C188u);
    ctx->pc = 0x13C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C180u;
    // 0x13c184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x13C180u, 0x13C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C188u;
label_13c188:
    // 0x13c188: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13c188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13c18c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13c190: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13c190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13c194: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13c194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c198: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c19c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13c1a0: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x13c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
    // 0x13c1a4: 0xa040018a  sb          $zero, 0x18A($v0)
    ctx->pc = 0x13c1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 394), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c1a8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1ac: 0xa0400189  sb          $zero, 0x189($v0)
    ctx->pc = 0x13c1acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 393), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c1b0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1b4: 0xac4001b8  sw          $zero, 0x1B8($v0)
    ctx->pc = 0x13c1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 0));
    // 0x13c1b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1bc: 0xa0400188  sb          $zero, 0x188($v0)
    ctx->pc = 0x13c1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 392), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c1c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1c4: 0xac400184  sw          $zero, 0x184($v0)
    ctx->pc = 0x13c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 0));
    // 0x13c1c8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1cc: 0xac440170  sw          $a0, 0x170($v0)
    ctx->pc = 0x13c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 4));
    // 0x13c1d0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1d4: 0xac44017c  sw          $a0, 0x17C($v0)
    ctx->pc = 0x13c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 4));
    // 0x13c1d8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1dc: 0xac400168  sw          $zero, 0x168($v0)
    ctx->pc = 0x13c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 0));
    // 0x13c1e0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1e4: 0xac43016c  sw          $v1, 0x16C($v0)
    ctx->pc = 0x13c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 3));
    // 0x13c1e8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1ec: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x13c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x13c1f0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1f4: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x13c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x13c1f8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c1fc: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x13c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x13c200: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c204: 0xac400178  sw          $zero, 0x178($v0)
    ctx->pc = 0x13c204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 0));
    // 0x13c208: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c20c: 0xac400174  sw          $zero, 0x174($v0)
    ctx->pc = 0x13c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 372), GPR_U32(ctx, 0));
    // 0x13c210: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c214: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x13c214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
    // 0x13c218: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c21c: 0xa040018b  sb          $zero, 0x18B($v0)
    ctx->pc = 0x13c21cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 395), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c220: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c224: 0xc080702  jal         func_201C08
    ctx->pc = 0x13C224u;
    SET_GPR_U32(ctx, 31, 0x13C22Cu);
    ctx->pc = 0x13C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C224u;
    // 0x13c228: 0x24440128  addiu       $a0, $v0, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x13C224u, 0x13C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C22Cu;
label_13c22c:
    // 0x13c22c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13c230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c238: 0x3e00008  jr          $ra
    ctx->pc = 0x13C238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C238u;
        // 0x13c23c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C240u;
}
