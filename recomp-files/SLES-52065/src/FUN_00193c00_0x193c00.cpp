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

// Function: FUN_00193c00
// Address: 0x193c00 - 0x193de8
void FUN_00193c00_0x193c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193c00_0x193c00");
#endif

    switch (ctx->pc) {
        case 0x193cc8u: goto label_193cc8;
        case 0x193ce4u: goto label_193ce4;
        case 0x193d14u: goto label_193d14;
        case 0x193d34u: goto label_193d34;
        case 0x193d68u: goto label_193d68;
        case 0x193d88u: goto label_193d88;
        case 0x193db4u: goto label_193db4;
        case 0x193dd4u: goto label_193dd4;
        default: break;
    }

    ctx->pc = 0x193c00u;

    // 0x193c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193c04: 0x2d010006  sltiu       $at, $t0, 0x6
    ctx->pc = 0x193c04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x193c08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193c14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x193c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c18: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x193C18u;
    {
        const bool branch_taken_0x193c18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C18u;
        // 0x193c1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c18) {
            ctx->pc = 0x193C68u;
            goto label_193c68;
        }
    }
    ctx->pc = 0x193C20u;
    // 0x193c20: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x193c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x193c24: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x193c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x193c28: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x193c2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193c30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193c34: 0x600008  jr          $v1
    ctx->pc = 0x193C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193C3Cu: goto label_193c3c;
            case 0x193C44u: goto label_193c44;
            case 0x193C4Cu: goto label_193c4c;
            case 0x193C54u: goto label_193c54;
            case 0x193C5Cu: goto label_193c5c;
            case 0x193C64u: goto label_193c64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x193C3Cu;
label_193c3c:
    // 0x193c3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x193C3Cu;
    {
        const bool branch_taken_0x193c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C3Cu;
        // 0x193c40: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c3c) {
            ctx->pc = 0x193C6Cu;
            goto label_193c6c;
        }
    }
    ctx->pc = 0x193C44u;
label_193c44:
    // 0x193c44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193C44u;
    {
        const bool branch_taken_0x193c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C44u;
        // 0x193c48: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c44) {
            ctx->pc = 0x193C68u;
            goto label_193c68;
        }
    }
    ctx->pc = 0x193C4Cu;
label_193c4c:
    // 0x193c4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x193C4Cu;
    {
        const bool branch_taken_0x193c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C4Cu;
        // 0x193c50: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c4c) {
            ctx->pc = 0x193C68u;
            goto label_193c68;
        }
    }
    ctx->pc = 0x193C54u;
label_193c54:
    // 0x193c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x193C54u;
    {
        const bool branch_taken_0x193c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C54u;
        // 0x193c58: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c54) {
            ctx->pc = 0x193C68u;
            goto label_193c68;
        }
    }
    ctx->pc = 0x193C5Cu;
label_193c5c:
    // 0x193c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193C5Cu;
    {
        const bool branch_taken_0x193c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C5Cu;
        // 0x193c60: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c5c) {
            ctx->pc = 0x193C68u;
            goto label_193c68;
        }
    }
    ctx->pc = 0x193C64u;
label_193c64:
    // 0x193c64: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x193c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_193c68:
    // 0x193c68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x193c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_193c6c:
    // 0x193c6c: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x193C6Cu;
    {
        const bool branch_taken_0x193c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x193C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C6Cu;
        // 0x193c70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c6c) {
            ctx->pc = 0x193D3Cu;
            goto label_193d3c;
        }
    }
    ctx->pc = 0x193C74u;
    // 0x193c74: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x193C74u;
    {
        const bool branch_taken_0x193c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x193c74) {
            ctx->pc = 0x193D3Cu;
            goto label_193d3c;
        }
    }
    ctx->pc = 0x193C7Cu;
    // 0x193c7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x193c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193c80: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x193C80u;
    {
        const bool branch_taken_0x193c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x193c80) {
            ctx->pc = 0x193C98u;
            goto label_193c98;
        }
    }
    ctx->pc = 0x193C88u;
    // 0x193c88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193C88u;
    {
        const bool branch_taken_0x193c88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c88) {
            ctx->pc = 0x193C98u;
            goto label_193c98;
        }
    }
    ctx->pc = 0x193C90u;
    // 0x193c90: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x193C90u;
    {
        const bool branch_taken_0x193c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C90u;
        // 0x193c94: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c90) {
            ctx->pc = 0x193DD8u;
            goto label_193dd8;
        }
    }
    ctx->pc = 0x193C98u;
label_193c98:
    // 0x193c98: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x193C98u;
    {
        const bool branch_taken_0x193c98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x193C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C98u;
        // 0x193c9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c98) {
            ctx->pc = 0x193CECu;
            goto label_193cec;
        }
    }
    ctx->pc = 0x193CA0u;
    // 0x193ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x193ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193ca4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193CA4u;
    {
        const bool branch_taken_0x193ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193ca4) {
            ctx->pc = 0x193CC8u;
            goto label_193cc8;
        }
    }
    ctx->pc = 0x193CACu;
    // 0x193cac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193cb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193cb4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cbc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193cbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193cc0: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193CC0u;
    SET_GPR_U32(ctx, 31, 0x193CC8u);
    ctx->pc = 0x193CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CC0u;
    // 0x193cc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193CC0u, 0x193CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CC8u;
label_193cc8:
    // 0x193cc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cd4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193cd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193cd8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193cd8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193cdc: 0xc053c00  jal         func_14F000
    ctx->pc = 0x193CDCu;
    SET_GPR_U32(ctx, 31, 0x193CE4u);
    ctx->pc = 0x193CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CDCu;
    // 0x193ce0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x193CDCu, 0x193CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CE4u;
label_193ce4:
    // 0x193ce4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x193CE4u;
    {
        const bool branch_taken_0x193ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ce4) {
            ctx->pc = 0x193DD4u;
            goto label_193dd4;
        }
    }
    ctx->pc = 0x193CECu;
label_193cec:
    // 0x193cec: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x193CECu;
    {
        const bool branch_taken_0x193cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193cec) {
            ctx->pc = 0x193D14u;
            goto label_193d14;
        }
    }
    ctx->pc = 0x193CF4u;
    // 0x193cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193d00: 0x0  nop
    ctx->pc = 0x193d00u;
    // NOP
    // 0x193d04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193d04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193d08: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193d08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193d0c: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193D0Cu;
    SET_GPR_U32(ctx, 31, 0x193D14u);
    ctx->pc = 0x193D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D0Cu;
    // 0x193d10: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193D0Cu, 0x193D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D14u;
label_193d14:
    // 0x193d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d24: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x193d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193d28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193d28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193d2c: 0xc053c00  jal         func_14F000
    ctx->pc = 0x193D2Cu;
    SET_GPR_U32(ctx, 31, 0x193D34u);
    ctx->pc = 0x193D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D2Cu;
    // 0x193d30: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x193D2Cu, 0x193D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D34u;
label_193d34:
    // 0x193d34: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x193D34u;
    {
        const bool branch_taken_0x193d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d34) {
            ctx->pc = 0x193DD4u;
            goto label_193dd4;
        }
    }
    ctx->pc = 0x193D3Cu;
label_193d3c:
    // 0x193d3c: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x193D3Cu;
    {
        const bool branch_taken_0x193d3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x193D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D3Cu;
        // 0x193d40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d3c) {
            ctx->pc = 0x193D90u;
            goto label_193d90;
        }
    }
    ctx->pc = 0x193D44u;
    // 0x193d44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x193d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193d48: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193D48u;
    {
        const bool branch_taken_0x193d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193d48) {
            ctx->pc = 0x193D68u;
            goto label_193d68;
        }
    }
    ctx->pc = 0x193D50u;
    // 0x193d50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193d58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193d5c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193d5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193d60: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193D60u;
    SET_GPR_U32(ctx, 31, 0x193D68u);
    ctx->pc = 0x193D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D60u;
    // 0x193d64: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193D60u, 0x193D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D68u;
label_193d68:
    // 0x193d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193d6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193d70: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193d7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193d80: 0xc053c00  jal         func_14F000
    ctx->pc = 0x193D80u;
    SET_GPR_U32(ctx, 31, 0x193D88u);
    ctx->pc = 0x193D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D80u;
    // 0x193d84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x193D80u, 0x193D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D88u;
label_193d88:
    // 0x193d88: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x193D88u;
    {
        const bool branch_taken_0x193d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d88) {
            ctx->pc = 0x193DD4u;
            goto label_193dd4;
        }
    }
    ctx->pc = 0x193D90u;
label_193d90:
    // 0x193d90: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193D90u;
    {
        const bool branch_taken_0x193d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193d90) {
            ctx->pc = 0x193DB4u;
            goto label_193db4;
        }
    }
    ctx->pc = 0x193D98u;
    // 0x193d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193da4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x193da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193da8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193da8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193dac: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193DACu;
    SET_GPR_U32(ctx, 31, 0x193DB4u);
    ctx->pc = 0x193DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DACu;
    // 0x193db0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193DACu, 0x193DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DB4u;
label_193db4:
    // 0x193db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193dc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dc4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193dc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193dc8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193dc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193dcc: 0xc053c00  jal         func_14F000
    ctx->pc = 0x193DCCu;
    SET_GPR_U32(ctx, 31, 0x193DD4u);
    ctx->pc = 0x193DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DCCu;
    // 0x193dd0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x193DCCu, 0x193DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD4u;
label_193dd4:
    // 0x193dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193dd8:
    // 0x193dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193de0: 0x3e00008  jr          $ra
    ctx->pc = 0x193DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DE0u;
        // 0x193de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193DE8u;
}
