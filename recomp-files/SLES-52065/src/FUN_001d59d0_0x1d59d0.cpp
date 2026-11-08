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

// Function: FUN_001d59d0
// Address: 0x1d59d0 - 0x1d6194
void FUN_001d59d0_0x1d59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d59d0_0x1d59d0");
#endif

    switch (ctx->pc) {
        case 0x1d5a10u: goto label_1d5a10;
        case 0x1d5b5cu: goto label_1d5b5c;
        case 0x1d5b70u: goto label_1d5b70;
        case 0x1d5b80u: goto label_1d5b80;
        case 0x1d5bc4u: goto label_1d5bc4;
        case 0x1d5bd8u: goto label_1d5bd8;
        case 0x1d5be8u: goto label_1d5be8;
        case 0x1d5c1cu: goto label_1d5c1c;
        case 0x1d5c30u: goto label_1d5c30;
        case 0x1d5c40u: goto label_1d5c40;
        case 0x1d5cb0u: goto label_1d5cb0;
        case 0x1d5cc8u: goto label_1d5cc8;
        case 0x1d5cd8u: goto label_1d5cd8;
        case 0x1d5d04u: goto label_1d5d04;
        case 0x1d5d34u: goto label_1d5d34;
        case 0x1d5d60u: goto label_1d5d60;
        case 0x1d5d74u: goto label_1d5d74;
        case 0x1d5da8u: goto label_1d5da8;
        case 0x1d5de8u: goto label_1d5de8;
        case 0x1d5df8u: goto label_1d5df8;
        case 0x1d5e08u: goto label_1d5e08;
        case 0x1d5eb8u: goto label_1d5eb8;
        case 0x1d5ed8u: goto label_1d5ed8;
        case 0x1d5f34u: goto label_1d5f34;
        case 0x1d5f48u: goto label_1d5f48;
        case 0x1d5f68u: goto label_1d5f68;
        case 0x1d5fd4u: goto label_1d5fd4;
        case 0x1d5fe8u: goto label_1d5fe8;
        case 0x1d5ff8u: goto label_1d5ff8;
        case 0x1d604cu: goto label_1d604c;
        case 0x1d6060u: goto label_1d6060;
        case 0x1d6070u: goto label_1d6070;
        case 0x1d60c4u: goto label_1d60c4;
        case 0x1d60e0u: goto label_1d60e0;
        case 0x1d60f0u: goto label_1d60f0;
        case 0x1d6140u: goto label_1d6140;
        case 0x1d6150u: goto label_1d6150;
        case 0x1d6168u: goto label_1d6168;
        default: break;
    }

    ctx->pc = 0x1d59d0u;

    // 0x1d59d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d59d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d59d4: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1d59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x1d59d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d59d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59dc: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x1d59dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x1d59e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d59e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59e4: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x1d59e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x1d59e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d59e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59ec: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x1d59ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x1d59f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d59f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59f4: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x1d59f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x1d59f8: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x1d59f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x1d59fc: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x1d59fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x1d5a00: 0x68001d9  bltz        $s4, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x1D5A00u;
    {
        const bool branch_taken_0x1d5a00 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1D5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A00u;
        // 0x1d5a04: 0xffbf0108  sd          $ra, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a00) {
            ctx->pc = 0x1D6168u;
            goto label_1d6168;
        }
    }
    ctx->pc = 0x1D5A08u;
    // 0x1d5a08: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D5A08u;
    SET_GPR_U32(ctx, 31, 0x1D5A10u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D5A08u, 0x1D5A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A10u;
label_1d5a10:
    // 0x1d5a10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d5a10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5a14: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d5a18: 0x120200d3  beq         $s0, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1D5A18u;
    {
        const bool branch_taken_0x1d5a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A18u;
        // 0x1d5a1c: 0x2a020081  slti        $v0, $s0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a18) {
            ctx->pc = 0x1D5D68u;
            goto label_1d5d68;
        }
    }
    ctx->pc = 0x1D5A20u;
    // 0x1d5a20: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D5A20u;
    {
        const bool branch_taken_0x1d5a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A20u;
        // 0x1d5a24: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a20) {
            ctx->pc = 0x1D5AB0u;
            goto label_1d5ab0;
        }
    }
    ctx->pc = 0x1D5A28u;
    // 0x1d5a28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d5a2c: 0x12020088  beq         $s0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1D5A2Cu;
    {
        const bool branch_taken_0x1d5a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A2Cu;
        // 0x1d5a30: 0x2a020009  slti        $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a2c) {
            ctx->pc = 0x1D5C50u;
            goto label_1d5c50;
        }
    }
    ctx->pc = 0x1D5A34u;
    // 0x1d5a34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D5A34u;
    {
        const bool branch_taken_0x1d5a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A34u;
        // 0x1d5a38: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a34) {
            ctx->pc = 0x1D5A78u;
            goto label_1d5a78;
        }
    }
    ctx->pc = 0x1D5A3Cu;
    // 0x1d5a3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5a40: 0x12020053  beq         $s0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1D5A40u;
    {
        const bool branch_taken_0x1d5a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A40u;
        // 0x1d5a44: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a40) {
            ctx->pc = 0x1D5B90u;
            goto label_1d5b90;
        }
    }
    ctx->pc = 0x1D5A48u;
    // 0x1d5a48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5A48u;
    {
        const bool branch_taken_0x1d5a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A48u;
        // 0x1d5a4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a48) {
            ctx->pc = 0x1D5A68u;
            goto label_1d5a68;
        }
    }
    ctx->pc = 0x1D5A50u;
    // 0x1d5a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5a54: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1D5A54u;
    {
        const bool branch_taken_0x1d5a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A54u;
        // 0x1d5a58: 0x240309e4  addiu       $v1, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a54) {
            ctx->pc = 0x1D5B38u;
            goto label_1d5b38;
        }
    }
    ctx->pc = 0x1D5A5Cu;
    // 0x1d5a5c: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x1D5A5Cu;
    {
        const bool branch_taken_0x1d5a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a5c) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5A64u;
    // 0x1d5a64: 0x0  nop
    ctx->pc = 0x1d5a64u;
    // NOP
label_1d5a68:
    // 0x1d5a68: 0x12020063  beq         $s0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D5A68u;
    {
        const bool branch_taken_0x1d5a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A68u;
        // 0x1d5a6c: 0x240309e4  addiu       $v1, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a68) {
            ctx->pc = 0x1D5BF8u;
            goto label_1d5bf8;
        }
    }
    ctx->pc = 0x1D5A70u;
    // 0x1d5a70: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1D5A70u;
    {
        const bool branch_taken_0x1d5a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a70) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5A78u;
label_1d5a78:
    // 0x1d5a78: 0x120200a5  beq         $s0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D5A78u;
    {
        const bool branch_taken_0x1d5a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A78u;
        // 0x1d5a7c: 0x2a020021  slti        $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a78) {
            ctx->pc = 0x1D5D10u;
            goto label_1d5d10;
        }
    }
    ctx->pc = 0x1D5A80u;
    // 0x1d5a80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5A80u;
    {
        const bool branch_taken_0x1d5a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A80u;
        // 0x1d5a84: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a80) {
            ctx->pc = 0x1D5AA0u;
            goto label_1d5aa0;
        }
    }
    ctx->pc = 0x1D5A88u;
    // 0x1d5a88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5a8c: 0x12020096  beq         $s0, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1D5A8Cu;
    {
        const bool branch_taken_0x1d5a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A8Cu;
        // 0x1d5a90: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a8c) {
            ctx->pc = 0x1D5CE8u;
            goto label_1d5ce8;
        }
    }
    ctx->pc = 0x1D5A94u;
    // 0x1d5a94: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x1D5A94u;
    {
        const bool branch_taken_0x1d5a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a94) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5A9Cu;
    // 0x1d5a9c: 0x0  nop
    ctx->pc = 0x1d5a9cu;
    // NOP
label_1d5aa0:
    // 0x1d5aa0: 0x120200a7  beq         $s0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1D5AA0u;
    {
        const bool branch_taken_0x1d5aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AA0u;
        // 0x1d5aa4: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5aa0) {
            ctx->pc = 0x1D5D40u;
            goto label_1d5d40;
        }
    }
    ctx->pc = 0x1D5AA8u;
    // 0x1d5aa8: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x1D5AA8u;
    {
        const bool branch_taken_0x1d5aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5aa8) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5AB0u;
label_1d5ab0:
    // 0x1d5ab0: 0x120200ed  beq         $s0, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x1D5AB0u;
    {
        const bool branch_taken_0x1d5ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AB0u;
        // 0x1d5ab4: 0x2a020801  slti        $v0, $s0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ab0) {
            ctx->pc = 0x1D5E68u;
            goto label_1d5e68;
        }
    }
    ctx->pc = 0x1D5AB8u;
    // 0x1d5ab8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5AB8u;
    {
        const bool branch_taken_0x1d5ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AB8u;
        // 0x1d5abc: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ab8) {
            ctx->pc = 0x1D5AF8u;
            goto label_1d5af8;
        }
    }
    ctx->pc = 0x1D5AC0u;
    // 0x1d5ac0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d5ac4: 0x12020070  beq         $s0, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1D5AC4u;
    {
        const bool branch_taken_0x1d5ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AC4u;
        // 0x1d5ac8: 0x2a020201  slti        $v0, $s0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ac4) {
            ctx->pc = 0x1D5C88u;
            goto label_1d5c88;
        }
    }
    ctx->pc = 0x1D5ACCu;
    // 0x1d5acc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5ACCu;
    {
        const bool branch_taken_0x1d5acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ACCu;
        // 0x1d5ad0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5acc) {
            ctx->pc = 0x1D5AE8u;
            goto label_1d5ae8;
        }
    }
    ctx->pc = 0x1D5AD4u;
    // 0x1d5ad4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1d5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d5ad8: 0x120200cf  beq         $s0, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1D5AD8u;
    {
        const bool branch_taken_0x1d5ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5ad8) {
            ctx->pc = 0x1D5E18u;
            goto label_1d5e18;
        }
    }
    ctx->pc = 0x1D5AE0u;
    // 0x1d5ae0: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x1D5AE0u;
    {
        const bool branch_taken_0x1d5ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ae0) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5AE8u;
label_1d5ae8:
    // 0x1d5ae8: 0x120200a5  beq         $s0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D5AE8u;
    {
        const bool branch_taken_0x1d5ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AE8u;
        // 0x1d5aec: 0x2521818  mult        $v1, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ae8) {
            ctx->pc = 0x1D5D80u;
            goto label_1d5d80;
        }
    }
    ctx->pc = 0x1D5AF0u;
    // 0x1d5af0: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5AF8u;
label_1d5af8:
    // 0x1d5af8: 0x12020125  beq         $s0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x1D5AF8u;
    {
        const bool branch_taken_0x1d5af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF8u;
        // 0x1d5afc: 0x2a022001  slti        $v0, $s0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af8) {
            ctx->pc = 0x1D5F90u;
            goto label_1d5f90;
        }
    }
    ctx->pc = 0x1D5B00u;
    // 0x1d5b00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5B00u;
    {
        const bool branch_taken_0x1d5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B00u;
        // 0x1d5b04: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b00) {
            ctx->pc = 0x1D5B20u;
            goto label_1d5b20;
        }
    }
    ctx->pc = 0x1D5B08u;
    // 0x1d5b08: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d5b0c: 0x120200de  beq         $s0, $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1D5B0Cu;
    {
        const bool branch_taken_0x1d5b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5b0c) {
            ctx->pc = 0x1D5E88u;
            goto label_1d5e88;
        }
    }
    ctx->pc = 0x1D5B14u;
    // 0x1d5b14: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x1D5B14u;
    {
        const bool branch_taken_0x1d5b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b14) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5B1Cu;
    // 0x1d5b1c: 0x0  nop
    ctx->pc = 0x1d5b1cu;
    // NOP
label_1d5b20:
    // 0x1d5b20: 0x12020139  beq         $s0, $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1D5B20u;
    {
        const bool branch_taken_0x1d5b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B20u;
        // 0x1d5b24: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b20) {
            ctx->pc = 0x1D6008u;
            goto label_1d6008;
        }
    }
    ctx->pc = 0x1D5B28u;
    // 0x1d5b28: 0x52020155  beql        $s0, $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x1D5B28u;
    {
        const bool branch_taken_0x1d5b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5b28) {
            ctx->pc = 0x1D5B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5B28u;
            // 0x1d5b2c: 0x1288c0  sll         $s1, $s2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6080u;
            goto label_1d6080;
        }
    }
    ctx->pc = 0x1D5B30u;
    // 0x1d5b30: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x1D5B30u;
    {
        const bool branch_taken_0x1d5b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b30) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5B38u;
label_1d5b38:
    // 0x1d5b38: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5b3c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5b40: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b48: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5b50: 0xacb2002c  sw          $s2, 0x2C($a1)
    ctx->pc = 0x1d5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 18));
    // 0x1d5b54: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5B54u;
    SET_GPR_U32(ctx, 31, 0x1D5B5Cu);
    ctx->pc = 0x1D5B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B54u;
    // 0x1d5b58: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5B54u, 0x1D5B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B5Cu;
label_1d5b5c:
    // 0x1d5b5c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5b60: 0x600017d  bltz        $s0, . + 4 + (0x17D << 2)
    ctx->pc = 0x1D5B60u;
    {
        const bool branch_taken_0x1d5b60 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B60u;
        // 0x1d5b64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b60) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5B68u;
    // 0x1d5b68: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5b6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5b70:
    // 0x1d5b70: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5b74: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5b78: 0xc0773e0  jal         func_1DCF80
    ctx->pc = 0x1D5B78u;
    SET_GPR_U32(ctx, 31, 0x1D5B80u);
    ctx->pc = 0x1D5B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B78u;
    // 0x1d5b7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF80u, 0x1D5B78u, 0x1D5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B80u;
label_1d5b80:
    // 0x1d5b80: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5B80u;
    {
        const bool branch_taken_0x1d5b80 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5b80) {
            ctx->pc = 0x1D5B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5B80u;
            // 0x1d5b84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b70;
        }
    }
    ctx->pc = 0x1D5B88u;
    // 0x1d5b88: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x1D5B88u;
    {
        const bool branch_taken_0x1d5b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b88) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5B90u;
label_1d5b90:
    // 0x1d5b90: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5b94: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5b98: 0x2833818  mult        $a3, $s4, $v1
    ctx->pc = 0x1d5b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d5b9c: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5ba0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1d5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d5ba4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d5ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5ba8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d5bac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5bb0: 0x14640169  bne         $v1, $a0, . + 4 + (0x169 << 2)
    ctx->pc = 0x1D5BB0u;
    {
        const bool branch_taken_0x1d5bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d5bb0) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5BB8u;
    // 0x1d5bb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5bbc: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5BBCu;
    SET_GPR_U32(ctx, 31, 0x1D5BC4u);
    ctx->pc = 0x1D5BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BBCu;
    // 0x1d5bc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5BBCu, 0x1D5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BC4u;
label_1d5bc4:
    // 0x1d5bc4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5bc8: 0x6000163  bltz        $s0, . + 4 + (0x163 << 2)
    ctx->pc = 0x1D5BC8u;
    {
        const bool branch_taken_0x1d5bc8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BC8u;
        // 0x1d5bcc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bc8) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5BD0u;
    // 0x1d5bd0: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5bd4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5bd8:
    // 0x1d5bd8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5bdc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5be0: 0xc0773f6  jal         func_1DCFD8
    ctx->pc = 0x1D5BE0u;
    SET_GPR_U32(ctx, 31, 0x1D5BE8u);
    ctx->pc = 0x1D5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BE0u;
    // 0x1d5be4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCFD8u, 0x1D5BE0u, 0x1D5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BE8u;
label_1d5be8:
    // 0x1d5be8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5BE8u;
    {
        const bool branch_taken_0x1d5be8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5be8) {
            ctx->pc = 0x1D5BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5BE8u;
            // 0x1d5bec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bd8;
        }
    }
    ctx->pc = 0x1D5BF0u;
    // 0x1d5bf0: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x1D5BF0u;
    {
        const bool branch_taken_0x1d5bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bf0) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5BF8u;
label_1d5bf8:
    // 0x1d5bf8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5bfc: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5c00: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c08: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5c10: 0xacb20030  sw          $s2, 0x30($a1)
    ctx->pc = 0x1d5c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 18));
    // 0x1d5c14: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5C14u;
    SET_GPR_U32(ctx, 31, 0x1D5C1Cu);
    ctx->pc = 0x1D5C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C14u;
    // 0x1d5c18: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5C14u, 0x1D5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C1Cu;
label_1d5c1c:
    // 0x1d5c1c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5c20: 0x600014d  bltz        $s0, . + 4 + (0x14D << 2)
    ctx->pc = 0x1D5C20u;
    {
        const bool branch_taken_0x1d5c20 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C20u;
        // 0x1d5c24: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c20) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5C28u;
    // 0x1d5c28: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5c2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5c30:
    // 0x1d5c30: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5c34: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5c38: 0xc07744e  jal         func_1DD138
    ctx->pc = 0x1D5C38u;
    SET_GPR_U32(ctx, 31, 0x1D5C40u);
    ctx->pc = 0x1D5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C38u;
    // 0x1d5c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD138u, 0x1D5C38u, 0x1D5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C40u;
label_1d5c40:
    // 0x1d5c40: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5C40u;
    {
        const bool branch_taken_0x1d5c40 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5c40) {
            ctx->pc = 0x1D5C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5C40u;
            // 0x1d5c44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5c30;
        }
    }
    ctx->pc = 0x1D5C48u;
    // 0x1d5c48: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1D5C48u;
    {
        const bool branch_taken_0x1d5c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c48) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5C50u;
label_1d5c50:
    // 0x1d5c50: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5c54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5c58: 0x2833818  mult        $a3, $s4, $v1
    ctx->pc = 0x1d5c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d5c5c: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5c60: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1d5c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d5c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c68: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1d5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d5c6c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5c70: 0x14640139  bne         $v1, $a0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1D5C70u;
    {
        const bool branch_taken_0x1d5c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C70u;
        // 0x1d5c74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c70) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5C78u;
    // 0x1d5c78: 0x2642ffc0  addiu       $v0, $s2, -0x40
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x1d5c7c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1D5C7Cu;
    {
        const bool branch_taken_0x1d5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C7Cu;
        // 0x1d5c80: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c7c) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5C84u;
    // 0x1d5c84: 0x0  nop
    ctx->pc = 0x1d5c84u;
    // NOP
label_1d5c88:
    // 0x1d5c88: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5c8c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5c90: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5c94: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5c98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c9c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5ca4: 0xacb20038  sw          $s2, 0x38($a1)
    ctx->pc = 0x1d5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 18));
    // 0x1d5ca8: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5CA8u;
    SET_GPR_U32(ctx, 31, 0x1D5CB0u);
    ctx->pc = 0x1D5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA8u;
    // 0x1d5cac: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5CA8u, 0x1D5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CB0u;
label_1d5cb0:
    // 0x1d5cb0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5cb4: 0x6000128  bltz        $s0, . + 4 + (0x128 << 2)
    ctx->pc = 0x1D5CB4u;
    {
        const bool branch_taken_0x1d5cb4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CB4u;
        // 0x1d5cb8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cb4) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5CBCu;
    // 0x1d5cbc: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5cc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5cc4: 0x0  nop
    ctx->pc = 0x1d5cc4u;
    // NOP
label_1d5cc8:
    // 0x1d5cc8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5ccc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5cd0: 0xc0774f8  jal         func_1DD3E0
    ctx->pc = 0x1D5CD0u;
    SET_GPR_U32(ctx, 31, 0x1D5CD8u);
    ctx->pc = 0x1D5CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CD0u;
    // 0x1d5cd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3E0u, 0x1D5CD0u, 0x1D5CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CD8u;
label_1d5cd8:
    // 0x1d5cd8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5CD8u;
    {
        const bool branch_taken_0x1d5cd8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5cd8) {
            ctx->pc = 0x1D5CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5CD8u;
            // 0x1d5cdc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5cc8;
        }
    }
    ctx->pc = 0x1D5CE0u;
    // 0x1d5ce0: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1D5CE0u;
    {
        const bool branch_taken_0x1d5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ce0) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5CE8u;
label_1d5ce8:
    // 0x1d5ce8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cec: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5cf0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5cf4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5cf8: 0xac320580  sw          $s2, 0x580($at)
    ctx->pc = 0x1d5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1408), GPR_U32(ctx, 18));
    // 0x1d5cfc: 0xc075428  jal         func_1D50A0
    ctx->pc = 0x1D5CFCu;
    SET_GPR_U32(ctx, 31, 0x1D5D04u);
    ctx->pc = 0x1D5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CFCu;
    // 0x1d5d00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50A0u, 0x1D5CFCu, 0x1D5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D04u;
label_1d5d04:
    // 0x1d5d04: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x1D5D04u;
    {
        const bool branch_taken_0x1d5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d04) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D0Cu;
    // 0x1d5d0c: 0x0  nop
    ctx->pc = 0x1d5d0cu;
    // NOP
label_1d5d10:
    // 0x1d5d10: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5d14: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5d1c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5d20: 0xac320580  sw          $s2, 0x580($at)
    ctx->pc = 0x1d5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1408), GPR_U32(ctx, 18));
    // 0x1d5d24: 0x1240010c  beqz        $s2, . + 4 + (0x10C << 2)
    ctx->pc = 0x1D5D24u;
    {
        const bool branch_taken_0x1d5d24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d24) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D2Cu;
    // 0x1d5d2c: 0xc0753e2  jal         func_1D4F88
    ctx->pc = 0x1D5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D34u);
    ctx->pc = 0x1D5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D2Cu;
    // 0x1d5d30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F88u, 0x1D5D2Cu, 0x1D5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D34u;
label_1d5d34:
    // 0x1d5d34: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1D5D34u;
    {
        const bool branch_taken_0x1d5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d34) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D3Cu;
    // 0x1d5d3c: 0x0  nop
    ctx->pc = 0x1d5d3cu;
    // NOP
label_1d5d40:
    // 0x1d5d40: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5d44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5d48: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5d4c: 0xac320580  sw          $s2, 0x580($at)
    ctx->pc = 0x1d5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1408), GPR_U32(ctx, 18));
    // 0x1d5d50: 0x12400101  beqz        $s2, . + 4 + (0x101 << 2)
    ctx->pc = 0x1D5D50u;
    {
        const bool branch_taken_0x1d5d50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d50) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D58u;
    // 0x1d5d58: 0xc0753be  jal         func_1D4EF8
    ctx->pc = 0x1D5D58u;
    SET_GPR_U32(ctx, 31, 0x1D5D60u);
    ctx->pc = 0x1D5D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D58u;
    // 0x1d5d5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4EF8u, 0x1D5D58u, 0x1D5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D60u;
label_1d5d60:
    // 0x1d5d60: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1D5D60u;
    {
        const bool branch_taken_0x1d5d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d60) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D68u;
label_1d5d68:
    // 0x1d5d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d6c: 0xc07540a  jal         func_1D5028
    ctx->pc = 0x1D5D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D74u);
    ctx->pc = 0x1D5D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D6Cu;
    // 0x1d5d70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5028u, 0x1D5D6Cu, 0x1D5D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D74u;
label_1d5d74:
    // 0x1d5d74: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1D5D74u;
    {
        const bool branch_taken_0x1d5d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d74) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D7Cu;
    // 0x1d5d7c: 0x0  nop
    ctx->pc = 0x1d5d7cu;
    // NOP
label_1d5d80:
    // 0x1d5d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5d84: 0x146200f4  bne         $v1, $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1D5D84u;
    {
        const bool branch_taken_0x1d5d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D84u;
        // 0x1d5d88: 0x2731018  mult        $v0, $s3, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d84) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D8Cu;
    // 0x1d5d8c: 0x144300f2  bne         $v0, $v1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1D5D8Cu;
    {
        const bool branch_taken_0x1d5d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D8Cu;
        // 0x1d5d90: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d8c) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5D94u;
    // 0x1d5d94: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1d5d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d5d98: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5da0: 0x24210844  addiu       $at, $at, 0x844
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 2116));
    // 0x1d5da4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1d5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1d5da8:
    // 0x1d5da8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d5dac: 0xac52fffc  sw          $s2, -0x4($v0)
    ctx->pc = 0x1d5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 18));
    // 0x1d5db0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1d5db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1d5db4: 0x0  nop
    ctx->pc = 0x1d5db4u;
    // NOP
    // 0x1d5db8: 0x0  nop
    ctx->pc = 0x1d5db8u;
    // NOP
    // 0x1d5dbc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5DBCu;
    {
        const bool branch_taken_0x1d5dbc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DBCu;
        // 0x1d5dc0: 0x24420074  addiu       $v0, $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dbc) {
            ctx->pc = 0x1D5DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5da8;
        }
    }
    ctx->pc = 0x1D5DC4u;
    // 0x1d5dc4: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5dc8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5dcc: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5dd0: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5dd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd8: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5de0: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5DE0u;
    SET_GPR_U32(ctx, 31, 0x1D5DE8u);
    ctx->pc = 0x1D5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DE0u;
    // 0x1d5de4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5DE0u, 0x1D5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DE8u;
label_1d5de8:
    // 0x1d5de8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5dec: 0x60000da  bltz        $s0, . + 4 + (0xDA << 2)
    ctx->pc = 0x1D5DECu;
    {
        const bool branch_taken_0x1d5dec = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1d5dec) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5DF4u;
    // 0x1d5df4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d5df8:
    // 0x1d5df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e00: 0xc07751c  jal         func_1DD470
    ctx->pc = 0x1D5E00u;
    SET_GPR_U32(ctx, 31, 0x1D5E08u);
    ctx->pc = 0x1D5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E00u;
    // 0x1d5e04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD470u, 0x1D5E00u, 0x1D5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E08u;
label_1d5e08:
    // 0x1d5e08: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5E08u;
    {
        const bool branch_taken_0x1d5e08 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5e08) {
            ctx->pc = 0x1D5E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E08u;
            // 0x1d5e0c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5df8;
        }
    }
    ctx->pc = 0x1D5E10u;
    // 0x1d5e10: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1D5E10u;
    {
        const bool branch_taken_0x1d5e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e10) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5E18u;
label_1d5e18:
    // 0x1d5e18: 0x126000cf  beqz        $s3, . + 4 + (0xCF << 2)
    ctx->pc = 0x1D5E18u;
    {
        const bool branch_taken_0x1d5e18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E18u;
        // 0x1d5e1c: 0x240309e4  addiu       $v1, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e18) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5E20u;
    // 0x1d5e20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d5e24: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5e28: 0x24a50558  addiu       $a1, $a1, 0x558
    ctx->pc = 0x1d5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
    // 0x1d5e2c: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x1d5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1d5e30: 0x133823  negu        $a3, $s3
    ctx->pc = 0x1d5e30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1d5e34: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d5e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e38: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5e3c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d5e40: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x1d5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x1d5e44: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d5e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5e48: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1d5e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d5e4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d5e50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5e54: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d5e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5e58: 0xe2980b  movn        $s3, $a3, $v0
    ctx->pc = 0x1d5e58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 7));
    // 0x1d5e5c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1d5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x1d5e60: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1D5E60u;
    {
        const bool branch_taken_0x1d5e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E60u;
        // 0x1d5e64: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e60) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5E68u;
label_1d5e68:
    // 0x1d5e68: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5e6c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5e70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5e74: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5e74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5e78: 0xac320570  sw          $s2, 0x570($at)
    ctx->pc = 0x1d5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1392), GPR_U32(ctx, 18));
    // 0x1d5e7c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1D5E7Cu;
    {
        const bool branch_taken_0x1d5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e7c) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5E84u;
    // 0x1d5e84: 0x0  nop
    ctx->pc = 0x1d5e84u;
    // NOP
label_1d5e88:
    // 0x1d5e88: 0x5a400031  blezl       $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D5E88u;
    {
        const bool branch_taken_0x1d5e88 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1d5e88) {
            ctx->pc = 0x1D5E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E88u;
            // 0x1d5e8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F50u;
            goto label_1d5f50;
        }
    }
    ctx->pc = 0x1D5E90u;
    // 0x1d5e90: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e98: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5e9c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1d5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1d5ea0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1d5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1d5ea4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d5ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d5ea8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d5eac: 0x8ca5055c  lw          $a1, 0x55C($a1)
    ctx->pc = 0x1d5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1372)));
    // 0x1d5eb0: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5EB0u;
    SET_GPR_U32(ctx, 31, 0x1D5EB8u);
    ctx->pc = 0x1D5EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB0u;
    // 0x1d5eb4: 0x2412007f  addiu       $s2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5EB0u, 0x1D5EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB8u;
label_1d5eb8:
    // 0x1d5eb8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5ebc: 0x6000019  bltz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5EBCu;
    {
        const bool branch_taken_0x1d5ebc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EBCu;
        // 0x1d5ec0: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ebc) {
            ctx->pc = 0x1D5F24u;
            goto label_1d5f24;
        }
    }
    ctx->pc = 0x1D5EC4u;
    // 0x1d5ec4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5ec8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d5ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5ecc: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5ed0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x1d5ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d5ed4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5ed8:
    // 0x1d5ed8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5edc: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x1d5edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x1d5ee0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1d5ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee4: 0x28650018  slti        $a1, $v1, 0x18
    ctx->pc = 0x1d5ee4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d5ee8: 0x2464ffe8  addiu       $a0, $v1, -0x18
    ctx->pc = 0x1d5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x1d5eec: 0x5100b  movn        $v0, $zero, $a1
    ctx->pc = 0x1d5eecu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1d5ef0: 0x693804  sllv        $a3, $t1, $v1
    ctx->pc = 0x1d5ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d5ef4: 0x1423021  addu        $a2, $t2, $v0
    ctx->pc = 0x1d5ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1d5ef8: 0x891804  sllv        $v1, $t1, $a0
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d5efc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5EFCu;
    {
        const bool branch_taken_0x1d5efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EFCu;
        // 0x1d5f00: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5efc) {
            ctx->pc = 0x1D5F10u;
            goto label_1d5f10;
        }
    }
    ctx->pc = 0x1D5F04u;
    // 0x1d5f04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5F04u;
    {
        const bool branch_taken_0x1d5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F04u;
        // 0x1d5f08: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f04) {
            ctx->pc = 0x1D5F14u;
            goto label_1d5f14;
        }
    }
    ctx->pc = 0x1D5F0Cu;
    // 0x1d5f0c: 0x0  nop
    ctx->pc = 0x1d5f0cu;
    // NOP
label_1d5f10:
    // 0x1d5f10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d5f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d5f14:
    // 0x1d5f14: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5f18: 0x601ffef  bgez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D5F18u;
    {
        const bool branch_taken_0x1d5f18 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F18u;
        // 0x1d5f1c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f18) {
            ctx->pc = 0x1D5ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ed8;
        }
    }
    ctx->pc = 0x1D5F20u;
    // 0x1d5f20: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d5f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d5f24:
    // 0x1d5f24: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5F24u;
    {
        const bool branch_taken_0x1d5f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f24) {
            ctx->pc = 0x1D5F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F24u;
            // 0x1d5f28: 0x8fa500c4  lw          $a1, 0xC4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F38u;
            goto label_1d5f38;
        }
    }
    ctx->pc = 0x1D5F2Cu;
    // 0x1d5f2c: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F34u);
    ctx->pc = 0x1D5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F2Cu;
    // 0x1d5f30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D5F2Cu, 0x1D5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F34u;
label_1d5f34:
    // 0x1d5f34: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1d5f38:
    // 0x1d5f38: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5F38u;
    {
        const bool branch_taken_0x1d5f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F38u;
        // 0x1d5f3c: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f38) {
            ctx->pc = 0x1D5F54u;
            goto label_1d5f54;
        }
    }
    ctx->pc = 0x1D5F40u;
    // 0x1d5f40: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D5F40u;
    SET_GPR_U32(ctx, 31, 0x1D5F48u);
    ctx->pc = 0x1D5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F40u;
    // 0x1d5f44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D5F40u, 0x1D5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F48u;
label_1d5f48:
    // 0x1d5f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5F48u;
    {
        const bool branch_taken_0x1d5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F48u;
        // 0x1d5f4c: 0x240209e4  addiu       $v0, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f48) {
            ctx->pc = 0x1D5F54u;
            goto label_1d5f54;
        }
    }
    ctx->pc = 0x1D5F50u;
label_1d5f50:
    // 0x1d5f50: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
label_1d5f54:
    // 0x1d5f54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f58: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5f5c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d5f60: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x1d5f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d5f68:
    // 0x1d5f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d5f6c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1d5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1d5f70: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1d5f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d5f74: 0x0  nop
    ctx->pc = 0x1d5f74u;
    // NOP
    // 0x1d5f78: 0x0  nop
    ctx->pc = 0x1d5f78u;
    // NOP
    // 0x1d5f7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5F7Cu;
    {
        const bool branch_taken_0x1d5f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F7Cu;
        // 0x1d5f80: 0x24630074  addiu       $v1, $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f7c) {
            ctx->pc = 0x1D5F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5f68;
        }
    }
    ctx->pc = 0x1D5F84u;
    // 0x1d5f84: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1D5F84u;
    {
        const bool branch_taken_0x1d5f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f84) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5F8Cu;
    // 0x1d5f8c: 0x0  nop
    ctx->pc = 0x1d5f8cu;
    // NOP
label_1d5f90:
    // 0x1d5f90: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1d5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d5f94: 0x240709e4  addiu       $a3, $zero, 0x9E4
    ctx->pc = 0x1d5f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5f98: 0x2873818  mult        $a3, $s4, $a3
    ctx->pc = 0x1d5f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d5f9c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d5fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5fa4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d5fa8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d5fac: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x1d5facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x1d5fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5fb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d5fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fb8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d5fbc: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d5fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5fc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fc8: 0xac5302b8  sw          $s3, 0x2B8($v0)
    ctx->pc = 0x1d5fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 19));
    // 0x1d5fcc: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D5FCCu;
    SET_GPR_U32(ctx, 31, 0x1D5FD4u);
    ctx->pc = 0x1D5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FCCu;
    // 0x1d5fd0: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D5FCCu, 0x1D5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FD4u;
label_1d5fd4:
    // 0x1d5fd4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5fd8: 0x600005f  bltz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D5FD8u;
    {
        const bool branch_taken_0x1d5fd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FD8u;
        // 0x1d5fdc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fd8) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D5FE0u;
    // 0x1d5fe0: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5fe8:
    // 0x1d5fe8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5fec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5ff0: 0xc077440  jal         func_1DD100
    ctx->pc = 0x1D5FF0u;
    SET_GPR_U32(ctx, 31, 0x1D5FF8u);
    ctx->pc = 0x1D5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FF0u;
    // 0x1d5ff4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD100u, 0x1D5FF0u, 0x1D5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FF8u;
label_1d5ff8:
    // 0x1d5ff8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5FF8u;
    {
        const bool branch_taken_0x1d5ff8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5ff8) {
            ctx->pc = 0x1D5FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5FF8u;
            // 0x1d5ffc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5fe8;
        }
    }
    ctx->pc = 0x1D6000u;
    // 0x1d6000: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1D6000u;
    {
        const bool branch_taken_0x1d6000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6000) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D6008u;
label_1d6008:
    // 0x1d6008: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d600c: 0x240709e4  addiu       $a3, $zero, 0x9E4
    ctx->pc = 0x1d600cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d6010: 0x2873818  mult        $a3, $s4, $a3
    ctx->pc = 0x1d6010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d6014: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1d6014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d601c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d601cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d6020: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6024: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x1d6024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x1d6028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d602c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6030: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d6030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d6034: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1d6034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d6038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d603c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6040: 0xac5302b0  sw          $s3, 0x2B0($v0)
    ctx->pc = 0x1d6040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 19));
    // 0x1d6044: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D6044u;
    SET_GPR_U32(ctx, 31, 0x1D604Cu);
    ctx->pc = 0x1D6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6044u;
    // 0x1d6048: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D6044u, 0x1D604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D604Cu;
label_1d604c:
    // 0x1d604c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d604cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6050: 0x6000041  bltz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D6050u;
    {
        const bool branch_taken_0x1d6050 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6050u;
        // 0x1d6054: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6050) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D6058u;
    // 0x1d6058: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d6058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d605c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d6060:
    // 0x1d6060: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d6060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d6064: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d6064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d6068: 0xc07747a  jal         func_1DD1E8
    ctx->pc = 0x1D6068u;
    SET_GPR_U32(ctx, 31, 0x1D6070u);
    ctx->pc = 0x1D606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6068u;
    // 0x1d606c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1E8u, 0x1D6068u, 0x1D6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6070u;
label_1d6070:
    // 0x1d6070: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D6070u;
    {
        const bool branch_taken_0x1d6070 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d6070) {
            ctx->pc = 0x1D6074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6070u;
            // 0x1d6074: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6060;
        }
    }
    ctx->pc = 0x1D6078u;
    // 0x1d6078: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D6078u;
    {
        const bool branch_taken_0x1d6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6078) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D6080u;
label_1d6080:
    // 0x1d6080: 0x240709e4  addiu       $a3, $zero, 0x9E4
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d6084: 0x2873818  mult        $a3, $s4, $a3
    ctx->pc = 0x1d6084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d6088: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x1d6088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d608c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d608cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6090: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1d6090u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1d6094: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6098: 0x26a30558  addiu       $v1, $s5, 0x558
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1368));
    // 0x1d609c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d609cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d60a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d60a4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d60a8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d60ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d60acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d60b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d60b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60b4: 0xac5302b0  sw          $s3, 0x2B0($v0)
    ctx->pc = 0x1d60b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 19));
    // 0x1d60b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d60b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60bc: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D60BCu;
    SET_GPR_U32(ctx, 31, 0x1D60C4u);
    ctx->pc = 0x1D60C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60BCu;
    // 0x1d60c0: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D60BCu, 0x1D60C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60C4u;
label_1d60c4:
    // 0x1d60c4: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x1D60C4u;
    {
        const bool branch_taken_0x1d60c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60C4u;
        // 0x1d60c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60c4) {
            ctx->pc = 0x1D6100u;
            goto label_1d6100;
        }
    }
    ctx->pc = 0x1D60CCu;
    // 0x1d60cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d60ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d60d0: 0x6000021  bltz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D60D0u;
    {
        const bool branch_taken_0x1d60d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60D0u;
        // 0x1d60d4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60d0) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D60D8u;
    // 0x1d60d8: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d60d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d60dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d60e0:
    // 0x1d60e0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d60e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d60e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d60e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d60e8: 0xc077440  jal         func_1DD100
    ctx->pc = 0x1D60E8u;
    SET_GPR_U32(ctx, 31, 0x1D60F0u);
    ctx->pc = 0x1D60ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60E8u;
    // 0x1d60ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD100u, 0x1D60E8u, 0x1D60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60F0u;
label_1d60f0:
    // 0x1d60f0: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D60F0u;
    {
        const bool branch_taken_0x1d60f0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d60f0) {
            ctx->pc = 0x1D60F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D60F0u;
            // 0x1d60f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D60E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d60e0;
        }
    }
    ctx->pc = 0x1D60F8u;
    // 0x1d60f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D60F8u;
    {
        const bool branch_taken_0x1d60f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d60f8) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D6100u;
label_1d6100:
    // 0x1d6100: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d6104: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1d6108: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d6108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d610c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6110: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6114: 0x26a40558  addiu       $a0, $s5, 0x558
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1368));
    // 0x1d6118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d611c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d6120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6124: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d6128: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6128u;
    {
        const bool branch_taken_0x1d6128 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6128u;
        // 0x1d612c: 0x8c5202b8  lw          $s2, 0x2B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6128) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D6130u;
    // 0x1d6130: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d6134: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d6134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d6138: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d613c: 0x0  nop
    ctx->pc = 0x1d613cu;
    // NOP
label_1d6140:
    // 0x1d6140: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d6140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d6144: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d6144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d6148: 0xc077440  jal         func_1DD100
    ctx->pc = 0x1D6148u;
    SET_GPR_U32(ctx, 31, 0x1D6150u);
    ctx->pc = 0x1D614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6148u;
    // 0x1d614c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD100u, 0x1D6148u, 0x1D6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6150u;
label_1d6150:
    // 0x1d6150: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D6150u;
    {
        const bool branch_taken_0x1d6150 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d6150) {
            ctx->pc = 0x1D6154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6150u;
            // 0x1d6154: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6140;
        }
    }
    ctx->pc = 0x1D6158u;
label_1d6158:
    // 0x1d6158: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6158u;
    {
        const bool branch_taken_0x1d6158 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6158) {
            ctx->pc = 0x1D615Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6158u;
            // 0x1d615c: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D616Cu;
            goto label_1d616c;
        }
    }
    ctx->pc = 0x1D6160u;
    // 0x1d6160: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D6160u;
    SET_GPR_U32(ctx, 31, 0x1D6168u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D6160u, 0x1D6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6168u;
label_1d6168:
    // 0x1d6168: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x1d6168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1d616c:
    // 0x1d616c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d616cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6170: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1d6170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d6174: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1d6174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d6178: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1d6178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d617c: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1d617cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d6180: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x1d6180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d6184: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x1d6184u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d6188: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x1d6188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d618c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D618Cu;
        // 0x1d6190: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D618Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6194u;
}
