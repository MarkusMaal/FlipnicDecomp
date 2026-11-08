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

// Function: entry_001e3224
// Address: 0x1e3224 - 0x1e32e0
void entry_001e3224_0x1e3224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3224_0x1e3224");
#endif

    switch (ctx->pc) {
        case 0x1e3270u: goto label_1e3270;
        case 0x1e3280u: goto label_1e3280;
        case 0x1e3298u: goto label_1e3298;
        case 0x1e32acu: goto label_1e32ac;
        case 0x1e32d8u: goto label_1e32d8;
        default: break;
    }

    ctx->pc = 0x1e3224u;

label_1e3224:
    // 0x1e3224: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e3224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3228:
    // 0x1e3228: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1e3228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_1e322c:
    // 0x1e322c: 0x2484c100  addiu       $a0, $a0, -0x3F00
    ctx->pc = 0x1e322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
label_1e3230:
    // 0x1e3230: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e3230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e3234:
    // 0x1e3234: 0x2463c10c  addiu       $v1, $v1, -0x3EF4
    ctx->pc = 0x1e3234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951180));
label_1e3238:
    // 0x1e3238: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e3238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e323c:
    // 0x1e323c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e323cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_1e3240:
    // 0x1e3240: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e3240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3244:
    // 0x1e3244: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3248:
    // 0x1e3248: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e3248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e324c:
    // 0x1e324c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3250:
    // 0x1e3250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3254:
    // 0x1e3254: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e3258:
    // 0x1e3258: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e3258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e325c:
    // 0x1e325c: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1e325cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1e3260:
    // 0x1e3260: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e3260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e3264:
    // 0x1e3264: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e3264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3268:
    // 0x1e3268: 0xc078584  jal         func_1E1610
label_1e326c:
    if (ctx->pc == 0x1E326Cu) {
        ctx->pc = 0x1E326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3268u;
        // 0x1e326c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3270u;
        goto label_1e3270;
    }
    ctx->pc = 0x1E3268u;
    SET_GPR_U32(ctx, 31, 0x1E3270u);
    ctx->pc = 0x1E326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3268u;
    // 0x1e326c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1610u, 0x1E3268u, 0x1E3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3270u;
label_1e3270:
    // 0x1e3270: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e3270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e3274:
    // 0x1e3274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3278:
    // 0x1e3278: 0xc04805c  jal         func_120170
label_1e327c:
    if (ctx->pc == 0x1E327Cu) {
        ctx->pc = 0x1E327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3278u;
        // 0x1e327c: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3280u;
        goto label_1e3280;
    }
    ctx->pc = 0x1E3278u;
    SET_GPR_U32(ctx, 31, 0x1E3280u);
    ctx->pc = 0x1E327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3278u;
    // 0x1e327c: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x1E3278u, 0x1E3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3280u;
label_1e3280:
    // 0x1e3280: 0x93828748  lbu         $v0, -0x78B8($gp)
    ctx->pc = 0x1e3280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936392)));
label_1e3284:
    // 0x1e3284: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1e3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1e3288:
    // 0x1e3288: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e3288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e328c:
    // 0x1e328c: 0x83a5006c  lb          $a1, 0x6C($sp)
    ctx->pc = 0x1e328cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
label_1e3290:
    // 0x1e3290: 0xc079750  jal         func_1E5D40
label_1e3294:
    if (ctx->pc == 0x1E3294u) {
        ctx->pc = 0x1E3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3290u;
        // 0x1e3294: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3298u;
        goto label_1e3298;
    }
    ctx->pc = 0x1E3290u;
    SET_GPR_U32(ctx, 31, 0x1E3298u);
    ctx->pc = 0x1E3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3290u;
    // 0x1e3294: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5D40u, 0x1E3290u, 0x1E3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3298u;
label_1e3298:
    // 0x1e3298: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e3298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e329c:
    // 0x1e329c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e32a0:
    // 0x1e32a0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e32a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e32a4:
    // 0x1e32a4: 0x320f809  jalr        $t9
label_1e32a8:
    if (ctx->pc == 0x1E32A8u) {
        ctx->pc = 0x1E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32A4u;
        // 0x1e32a8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32ACu;
        goto label_1e32ac;
    }
    ctx->pc = 0x1E32A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E32ACu);
        ctx->pc = 0x1E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32A4u;
        // 0x1e32a8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32A4u, 0x1E32ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E32ACu;
label_1e32ac:
    // 0x1e32ac: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e32acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e32b0:
    // 0x1e32b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e32b4:
    // 0x1e32b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e32b8:
    if (ctx->pc == 0x1E32B8u) {
        ctx->pc = 0x1E32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32B4u;
        // 0x1e32b8: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32BCu;
        goto label_1e32bc;
    }
    ctx->pc = 0x1E32B4u;
    {
        const bool branch_taken_0x1e32b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32B4u;
        // 0x1e32b8: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32b4) {
            ctx->pc = 0x1E32E0u;
            return;
        }
    }
    ctx->pc = 0x1E32BCu;
label_1e32bc:
    // 0x1e32bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e32c0:
    // 0x1e32c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e32c4:
    // 0x1e32c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e32c8:
    if (ctx->pc == 0x1E32C8u) {
        ctx->pc = 0x1E32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32C4u;
        // 0x1e32c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32CCu;
        goto label_1e32cc;
    }
    ctx->pc = 0x1E32C4u;
    {
        const bool branch_taken_0x1e32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32C4u;
        // 0x1e32c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32c4) {
            ctx->pc = 0x1E32E0u;
            return;
        }
    }
    ctx->pc = 0x1E32CCu;
label_1e32cc:
    // 0x1e32cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e32ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e32d0:
    // 0x1e32d0: 0xc0483d8  jal         func_120F60
label_1e32d4:
    if (ctx->pc == 0x1E32D4u) {
        ctx->pc = 0x1E32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D0u;
        // 0x1e32d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32D8u;
        goto label_1e32d8;
    }
    ctx->pc = 0x1E32D0u;
    SET_GPR_U32(ctx, 31, 0x1E32D8u);
    ctx->pc = 0x1E32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32D0u;
    // 0x1e32d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E32D0u, 0x1E32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32D8u;
label_1e32d8:
    // 0x1e32d8: 0xc0401a4  jal         func_100690
label_1e32dc:
    if (ctx->pc == 0x1E32DCu) {
        ctx->pc = 0x1E32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D8u;
        // 0x1e32dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32E0u;
        goto label_fallthrough_0x1e32d8;
    }
    ctx->pc = 0x1E32D8u;
    SET_GPR_U32(ctx, 31, 0x1E32E0u);
    ctx->pc = 0x1E32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32D8u;
    // 0x1e32dc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E32D8u, 0x1E32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1e32d8:
    ctx->pc = 0x1E32E0u;
}
