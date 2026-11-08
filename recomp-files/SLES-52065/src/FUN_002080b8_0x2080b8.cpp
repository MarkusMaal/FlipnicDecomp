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

// Function: FUN_002080b8
// Address: 0x2080b8 - 0x208360
void FUN_002080b8_0x2080b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002080b8_0x2080b8");
#endif

    switch (ctx->pc) {
        case 0x2080f4u: goto label_2080f4;
        case 0x208104u: goto label_208104;
        case 0x2081d0u: goto label_2081d0;
        case 0x2081e0u: goto label_2081e0;
        case 0x2081f0u: goto label_2081f0;
        case 0x208200u: goto label_208200;
        case 0x208278u: goto label_208278;
        case 0x2082d0u: goto label_2082d0;
        case 0x208334u: goto label_208334;
        default: break;
    }

    ctx->pc = 0x2080b8u;

    // 0x2080b8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2080b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2080bc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2080bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2080c0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2080c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2080c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2080c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2080c8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2080c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2080cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2080ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080d0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2080d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2080d4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2080d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2080d8: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2080d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2080dc: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2080dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2080e0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2080e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2080e4: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2080e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2080e8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2080e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2080ec: 0xc081f46  jal         func_207D18
    ctx->pc = 0x2080ECu;
    SET_GPR_U32(ctx, 31, 0x2080F4u);
    ctx->pc = 0x2080F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080ECu;
    // 0x2080f0: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x2080ECu, 0x2080F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080F4u;
label_2080f4:
    // 0x2080f4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2080f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2080f8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2080f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2080fc: 0xc081f46  jal         func_207D18
    ctx->pc = 0x2080FCu;
    SET_GPR_U32(ctx, 31, 0x208104u);
    ctx->pc = 0x208100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080FCu;
    // 0x208100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D18u, 0x2080FCu, 0x208104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208104u;
label_208104:
    // 0x208104: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x208104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208108: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x208108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20810c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20810Cu;
    {
        const bool branch_taken_0x20810c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20810Cu;
        // 0x208110: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20810c) {
            ctx->pc = 0x208168u;
            goto label_208168;
        }
    }
    ctx->pc = 0x208114u;
    // 0x208114: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x208114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208118: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x208118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20811c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x20811Cu;
    {
        const bool branch_taken_0x20811c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20811c) {
            ctx->pc = 0x208120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20811Cu;
            // 0x208120: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208190u;
            goto label_208190;
        }
    }
    ctx->pc = 0x208124u;
    // 0x208124: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x208124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x208128: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208128u;
    {
        const bool branch_taken_0x208128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208128u;
        // 0x20812c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208128) {
            ctx->pc = 0x208144u;
            goto label_208144;
        }
    }
    ctx->pc = 0x208130u;
    // 0x208130: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x208130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x208134: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208134u;
    {
        const bool branch_taken_0x208134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208134u;
        // 0x208138: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208134) {
            ctx->pc = 0x208154u;
            goto label_208154;
        }
    }
    ctx->pc = 0x20813Cu;
    // 0x20813c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20813Cu;
    {
        const bool branch_taken_0x20813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20813Cu;
        // 0x208140: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20813c) {
            ctx->pc = 0x208170u;
            goto label_208170;
        }
    }
    ctx->pc = 0x208144u;
label_208144:
    // 0x208144: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208144u;
    {
        const bool branch_taken_0x208144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208144u;
        // 0x208148: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208144) {
            ctx->pc = 0x208160u;
            goto label_208160;
        }
    }
    ctx->pc = 0x20814Cu;
    // 0x20814c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20814Cu;
    {
        const bool branch_taken_0x20814c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20814Cu;
        // 0x208150: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20814c) {
            ctx->pc = 0x208190u;
            goto label_208190;
        }
    }
    ctx->pc = 0x208154u;
label_208154:
    // 0x208154: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x208154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x208158: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x208158u;
    {
        const bool branch_taken_0x208158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208158u;
        // 0x20815c: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208158) {
            ctx->pc = 0x20832Cu;
            goto label_20832c;
        }
    }
    ctx->pc = 0x208160u;
label_208160:
    // 0x208160: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208160u;
    {
        const bool branch_taken_0x208160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208160u;
        // 0x208164: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208160) {
            ctx->pc = 0x208184u;
            goto label_208184;
        }
    }
    ctx->pc = 0x208168u;
label_208168:
    // 0x208168: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20816c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_208170:
    // 0x208170: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x208170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x208174: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x208178: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x208178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20817c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x20817Cu;
    {
        const bool branch_taken_0x20817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20817Cu;
        // 0x208180: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20817c) {
            ctx->pc = 0x20832Cu;
            goto label_20832c;
        }
    }
    ctx->pc = 0x208184u;
label_208184:
    // 0x208184: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208184u;
    {
        const bool branch_taken_0x208184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208184u;
        // 0x208188: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208184) {
            ctx->pc = 0x2081A8u;
            goto label_2081a8;
        }
    }
    ctx->pc = 0x20818Cu;
    // 0x20818c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x20818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_208190:
    // 0x208190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208194: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208198: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x208198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x20819c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20819cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2081a0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2081A0u;
    {
        const bool branch_taken_0x2081a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081A0u;
        // 0x2081a4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081a0) {
            ctx->pc = 0x20832Cu;
            goto label_20832c;
        }
    }
    ctx->pc = 0x2081A8u;
label_2081a8:
    // 0x2081a8: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x2081ac: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x2081acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x2081b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2081b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2081b4: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x2081b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x2081b8: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x2081b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x2081bc: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x2081bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2081c0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x2081c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x2081c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2081c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081c8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081C8u;
    SET_GPR_U32(ctx, 31, 0x2081D0u);
    ctx->pc = 0x2081CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081C8u;
    // 0x2081cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081C8u, 0x2081D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081D0u;
label_2081d0:
    // 0x2081d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2081d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2081d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081d8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081D8u;
    SET_GPR_U32(ctx, 31, 0x2081E0u);
    ctx->pc = 0x2081DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081D8u;
    // 0x2081dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081D8u, 0x2081E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081E0u;
label_2081e0:
    // 0x2081e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2081e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2081e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081e8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081E8u;
    SET_GPR_U32(ctx, 31, 0x2081F0u);
    ctx->pc = 0x2081ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081E8u;
    // 0x2081ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081E8u, 0x2081F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081F0u;
label_2081f0:
    // 0x2081f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2081f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2081f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081f8: 0xc081c20  jal         func_207080
    ctx->pc = 0x2081F8u;
    SET_GPR_U32(ctx, 31, 0x208200u);
    ctx->pc = 0x2081FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081F8u;
    // 0x2081fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x2081F8u, 0x208200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208200u;
label_208200:
    // 0x208200: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x208200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x208204: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x208204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208208: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x208208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x20820c: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x20820cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x208210: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x208210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x208214: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x208214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x208218: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x208218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20821c: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x20821cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x208220: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208224: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x208224u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x208228: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x208228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x20822c: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x20822cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x208230: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x208230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x208234: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x208234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x208238: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x208238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x20823c: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x20823cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x208240: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x208240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x208244: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x208244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x208248: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x208248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20824c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208250: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x208254: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x208254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x208258: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x208258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x20825c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20825Cu;
    {
        const bool branch_taken_0x20825c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20825Cu;
        // 0x208260: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20825c) {
            ctx->pc = 0x2082A4u;
            goto label_2082a4;
        }
    }
    ctx->pc = 0x208264u;
    // 0x208264: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x208264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x208268: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x208268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x20826c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208270: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x208270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x208274: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x208274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_208278:
    // 0x208278: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x208278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20827c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20827cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x208280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208280u;
    {
        const bool branch_taken_0x208280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208280u;
        // 0x208284: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208280) {
            ctx->pc = 0x208290u;
            goto label_208290;
        }
    }
    ctx->pc = 0x208288u;
    // 0x208288: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x208288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x20828c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x20828cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_208290:
    // 0x208290: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x208290u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x208294: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x208294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x208298: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x208298u;
    {
        const bool branch_taken_0x208298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208298u;
        // 0x20829c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208298) {
            ctx->pc = 0x208278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208278;
        }
    }
    ctx->pc = 0x2082A0u;
    // 0x2082a0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2082a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2082a4:
    // 0x2082a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2082a8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2082a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2082ac: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2082acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2082b0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2082B0u;
    {
        const bool branch_taken_0x2082b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2082B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082B0u;
        // 0x2082b4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082b0) {
            ctx->pc = 0x2082F8u;
            goto label_2082f8;
        }
    }
    ctx->pc = 0x2082B8u;
    // 0x2082b8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2082b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2082bc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2082bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2082c0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x2082c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2082c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2082c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2082c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2082c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2082cc: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2082ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_2082d0:
    // 0x2082d0: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x2082d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x2082d4: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x2082d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x2082d8: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x2082d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x2082dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2082dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2082e0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2082e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2082e4: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x2082e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2082e8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2082E8u;
    {
        const bool branch_taken_0x2082e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082E8u;
        // 0x2082ec: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082e8) {
            ctx->pc = 0x2082D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2082d0;
        }
    }
    ctx->pc = 0x2082F0u;
    // 0x2082f0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2082f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2082f4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2082f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2082f8:
    // 0x2082f8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2082f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2082fc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2082FCu;
    {
        const bool branch_taken_0x2082fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2082fc) {
            ctx->pc = 0x208300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2082FCu;
            // 0x208300: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208320u;
            goto label_208320;
        }
    }
    ctx->pc = 0x208304u;
    // 0x208304: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x208304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x208308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208308u;
    {
        const bool branch_taken_0x208308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208308u;
        // 0x20830c: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208308) {
            ctx->pc = 0x208318u;
            goto label_208318;
        }
    }
    ctx->pc = 0x208310u;
    // 0x208310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208310u;
    {
        const bool branch_taken_0x208310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208310u;
        // 0x208314: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208310) {
            ctx->pc = 0x20831Cu;
            goto label_20831c;
        }
    }
    ctx->pc = 0x208318u;
label_208318:
    // 0x208318: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x208318u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_20831c:
    // 0x20831c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x20831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_208320:
    // 0x208320: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208324: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x208324u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x208328: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x208328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20832c:
    // 0x20832c: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x20832Cu;
    SET_GPR_U32(ctx, 31, 0x208334u);
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x20832Cu, 0x208334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208334u;
label_208334:
    // 0x208334: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x208334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x208338: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x208338u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20833c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x20833cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x208340: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x208340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x208344: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x208344u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x208348: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x208348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20834c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x20834cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x208350: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x208350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x208354: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x208354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x208358: 0x3e00008  jr          $ra
    ctx->pc = 0x208358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208358u;
        // 0x20835c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208360u;
}
