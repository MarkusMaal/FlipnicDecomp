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

// Function: entry_001e6278
// Address: 0x1e6278 - 0x1e62e4
void entry_001e6278_0x1e6278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6278_0x1e6278");
#endif

    switch (ctx->pc) {
        case 0x1e62b0u: goto label_1e62b0;
        default: break;
    }

    ctx->pc = 0x1e6278u;

label_1e6278:
    // 0x1e6278: 0x26850028  addiu       $a1, $s4, 0x28
    ctx->pc = 0x1e6278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_1e627c:
    // 0x1e627c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1e627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e6280:
    // 0x1e6280: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x1e6280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1e6284:
    // 0x1e6284: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e6284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e6288:
    // 0x1e6288: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e6288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e628c:
    // 0x1e628c: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x1e628cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e6290:
    // 0x1e6290: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x1e6290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1e6294:
    // 0x1e6294: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x1e6294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_1e6298:
    // 0x1e6298: 0x27a9007e  addiu       $t1, $sp, 0x7E
    ctx->pc = 0x1e6298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
label_1e629c:
    // 0x1e629c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e629cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e62a0:
    // 0x1e62a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e62a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e62a4:
    // 0x1e62a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e62a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e62a8:
    // 0x1e62a8: 0x320f809  jalr        $t9
label_1e62ac:
    if (ctx->pc == 0x1E62ACu) {
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62B0u;
        goto label_1e62b0;
    }
    ctx->pc = 0x1E62A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E62B0u);
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E62A8u, 0x1E62B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E62B0u;
label_1e62b0:
    // 0x1e62b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e62b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e62b4:
    // 0x1e62b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e62b8:
    // 0x1e62b8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1e62bc:
    if (ctx->pc == 0x1E62BCu) {
        ctx->pc = 0x1E62C0u;
        goto label_1e62c0;
    }
    ctx->pc = 0x1E62B8u;
    {
        const bool branch_taken_0x1e62b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e62b8) {
            ctx->pc = 0x1E6300u;
            return;
        }
    }
    ctx->pc = 0x1E62C0u;
label_1e62c0:
    // 0x1e62c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e62c4:
    // 0x1e62c4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1e62c8:
    if (ctx->pc == 0x1E62C8u) {
        ctx->pc = 0x1E62CCu;
        goto label_1e62cc;
    }
    ctx->pc = 0x1E62C4u;
    {
        const bool branch_taken_0x1e62c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e62c4) {
            ctx->pc = 0x1E62F0u;
            return;
        }
    }
    ctx->pc = 0x1E62CCu;
label_1e62cc:
    // 0x1e62cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1e62d0:
    if (ctx->pc == 0x1E62D0u) {
        ctx->pc = 0x1E62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62CCu;
        // 0x1e62d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E62D4u;
        goto label_1e62d4;
    }
    ctx->pc = 0x1E62CCu;
    {
        const bool branch_taken_0x1e62cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62CCu;
        // 0x1e62d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62cc) {
            ctx->pc = 0x1E62F0u;
            return;
        }
    }
    ctx->pc = 0x1E62D4u;
label_1e62d4:
    // 0x1e62d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e62d8:
    if (ctx->pc == 0x1E62D8u) {
        ctx->pc = 0x1E62DCu;
        goto label_1e62dc;
    }
    ctx->pc = 0x1E62D4u;
    {
        const bool branch_taken_0x1e62d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e62d4) {
            ctx->pc = 0x1E62E4u;
            return;
        }
    }
    ctx->pc = 0x1E62DCu;
label_1e62dc:
    // 0x1e62dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e62e0:
    if (ctx->pc == 0x1E62E0u) {
        ctx->pc = 0x1E62E4u;
        goto label_fallthrough_0x1e62dc;
    }
    ctx->pc = 0x1E62DCu;
    {
        const bool branch_taken_0x1e62dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62dc) {
            ctx->pc = 0x1E630Cu;
            return;
        }
    }
label_fallthrough_0x1e62dc:
    ctx->pc = 0x1E62E4u;
}
