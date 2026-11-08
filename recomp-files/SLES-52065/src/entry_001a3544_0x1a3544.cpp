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

// Function: entry_001a3544
// Address: 0x1a3544 - 0x1a35f0
void entry_001a3544_0x1a3544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3544_0x1a3544");
#endif

    ctx->pc = 0x1a3544u;

    // 0x1a3544: 0x0  nop
    ctx->pc = 0x1a3544u;
    // NOP
    // 0x1a3548: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x1a3548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a354c: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x1a354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1a3550: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1A3550u;
    {
        const bool branch_taken_0x1a3550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3550) {
            ctx->pc = 0x1A3668u;
            return;
        }
    }
    ctx->pc = 0x1A3558u;
    // 0x1a3558: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1a355c: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A355Cu;
    {
        const bool branch_taken_0x1a355c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a355c) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A3564u;
    // 0x1a3564: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a3564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a3568: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A3568u;
    {
        const bool branch_taken_0x1a3568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3568) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A3570u;
    // 0x1a3570: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1a3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a3574: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A3574u;
    {
        const bool branch_taken_0x1a3574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3574) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A357Cu;
    // 0x1a357c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1a357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1a3580: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A3580u;
    {
        const bool branch_taken_0x1a3580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3580) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A3588u;
    // 0x1a3588: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1a3588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1a358c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A358Cu;
    {
        const bool branch_taken_0x1a358c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a358c) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A3594u;
    // 0x1a3594: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1a3594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a3598: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A3598u;
    {
        const bool branch_taken_0x1a3598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3598) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A35A0u;
    // 0x1a35a0: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1a35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1a35a4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A35A4u;
    {
        const bool branch_taken_0x1a35a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35a4) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A35ACu;
    // 0x1a35ac: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a35b0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A35B0u;
    {
        const bool branch_taken_0x1a35b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35b0) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A35B8u;
    // 0x1a35b8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1a35bc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A35BCu;
    {
        const bool branch_taken_0x1a35bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35bc) {
            ctx->pc = 0x1A3640u;
            return;
        }
    }
    ctx->pc = 0x1A35C4u;
    // 0x1a35c4: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1a35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1a35c8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A35C8u;
    {
        const bool branch_taken_0x1a35c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35c8) {
            ctx->pc = 0x1A3600u;
            return;
        }
    }
    ctx->pc = 0x1A35D0u;
    // 0x1a35d0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1a35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a35d4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A35D4u;
    {
        const bool branch_taken_0x1a35d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35d4) {
            ctx->pc = 0x1A35F8u;
            return;
        }
    }
    ctx->pc = 0x1A35DCu;
    // 0x1a35dc: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1a35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1a35e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A35E0u;
    {
        const bool branch_taken_0x1a35e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a35e0) {
            ctx->pc = 0x1A35F0u;
            return;
        }
    }
    ctx->pc = 0x1A35E8u;
    // 0x1a35e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A35E8u;
    {
        const bool branch_taken_0x1a35e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a35e8) {
            ctx->pc = 0x1A366Cu;
            return;
        }
    }
    ctx->pc = 0x1A35F0u;
}
