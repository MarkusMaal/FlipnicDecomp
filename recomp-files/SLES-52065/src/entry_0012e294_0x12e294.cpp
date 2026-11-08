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

// Function: entry_0012e294
// Address: 0x12e294 - 0x12e348
void entry_0012e294_0x12e294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e294_0x12e294");
#endif

    switch (ctx->pc) {
        case 0x12e2c0u: goto label_12e2c0;
        case 0x12e2d0u: goto label_12e2d0;
        case 0x12e2fcu: goto label_12e2fc;
        case 0x12e308u: goto label_12e308;
        case 0x12e314u: goto label_12e314;
        default: break;
    }

    ctx->pc = 0x12e294u;

    // 0x12e294: 0x0  nop
    ctx->pc = 0x12e294u;
    // NOP
    // 0x12e298: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12e29c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x12e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x12e2a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12e2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e2a8: 0x1602ffb8  bne         $s0, $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x12E2A8u;
    {
        const bool branch_taken_0x12e2a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x12e2a8) {
            ctx->pc = 0x12E18Cu;
            return;
        }
    }
    ctx->pc = 0x12E2B0u;
    // 0x12e2b0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x12e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x12e2b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e2b8: 0xc04b8d8  jal         func_12E360
    ctx->pc = 0x12E2B8u;
    SET_GPR_U32(ctx, 31, 0x12E2C0u);
    ctx->pc = 0x12E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2B8u;
    // 0x12e2bc: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E360u, 0x12E2B8u, 0x12E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2C0u;
label_12e2c0:
    // 0x12e2c0: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x12e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2c8: 0xc04b8d4  jal         func_12E350
    ctx->pc = 0x12E2C8u;
    SET_GPR_U32(ctx, 31, 0x12E2D0u);
    ctx->pc = 0x12E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2C8u;
    // 0x12e2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E350u, 0x12E2C8u, 0x12E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2D0u;
label_12e2d0:
    // 0x12e2d0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x12e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12e2d8: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x12e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2dc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12e2e0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x12e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12e2e4: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x12e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x12e2e8: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x12e2ec: 0x83a70108  lb          $a3, 0x108($sp)
    ctx->pc = 0x12e2ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x12e2f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12e2f4: 0xc04b944  jal         func_12E510
    ctx->pc = 0x12E2F4u;
    SET_GPR_U32(ctx, 31, 0x12E2FCu);
    ctx->pc = 0x12E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2F4u;
    // 0x12e2f8: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E510u, 0x12E2F4u, 0x12E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2FCu;
label_12e2fc:
    // 0x12e2fc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12e300: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x12E300u;
    SET_GPR_U32(ctx, 31, 0x12E308u);
    ctx->pc = 0x12E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E300u;
    // 0x12e304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x12E300u, 0x12E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E308u;
label_12e308:
    // 0x12e308: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12e30c: 0xc048414  jal         func_121050
    ctx->pc = 0x12E30Cu;
    SET_GPR_U32(ctx, 31, 0x12E314u);
    ctx->pc = 0x12E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E30Cu;
    // 0x12e310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x12E30Cu, 0x12E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E314u;
label_12e314:
    // 0x12e314: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12e314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12e318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e31c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12e31cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e320: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12e320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e324: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12e324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12e328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12e328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12e32c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12e32cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12e330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e33c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e340: 0x3e00008  jr          $ra
    ctx->pc = 0x12E340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E340u;
        // 0x12e344: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E348u;
}
