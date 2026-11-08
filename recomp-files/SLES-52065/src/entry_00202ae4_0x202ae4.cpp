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

// Function: entry_00202ae4
// Address: 0x202ae4 - 0x202b20
void entry_00202ae4_0x202ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202ae4_0x202ae4");
#endif

    ctx->pc = 0x202ae4u;

    // 0x202ae4: 0x14e00037  bnez        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x202AE4u;
    {
        const bool branch_taken_0x202ae4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x202AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AE4u;
        // 0x202ae8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ae4) {
            ctx->pc = 0x202BC4u;
            return;
        }
    }
    ctx->pc = 0x202AECu;
    // 0x202aec: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x202AECu;
    {
        const bool branch_taken_0x202aec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x202aec) {
            ctx->pc = 0x202B20u;
            return;
        }
    }
    ctx->pc = 0x202AF4u;
    // 0x202af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202af8: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x202af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x202afc: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x202afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x202b00: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x202B00u;
    {
        const bool branch_taken_0x202b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x202B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B00u;
        // 0x202b04: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b00) {
            ctx->pc = 0x202B74u;
            return;
        }
    }
    ctx->pc = 0x202B08u;
    // 0x202b08: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x202b08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202b10: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x202b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x202b14: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x202b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x202b18: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x202B18u;
    {
        const bool branch_taken_0x202b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B18u;
        // 0x202b1c: 0x2883c  dsll32      $s1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b18) {
            ctx->pc = 0x2030B0u;
            return;
        }
    }
    ctx->pc = 0x202B20u;
}
