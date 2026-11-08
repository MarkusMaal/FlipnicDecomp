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

// Function: entry_002052a4
// Address: 0x2052a4 - 0x2052e0
void entry_002052a4_0x2052a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002052a4_0x2052a4");
#endif

    ctx->pc = 0x2052a4u;

    // 0x2052a4: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x2052a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2052a8: 0x1080029e  beqz        $a0, . + 4 + (0x29E << 2)
    ctx->pc = 0x2052A8u;
    {
        const bool branch_taken_0x2052a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A8u;
        // 0x2052ac: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052a8) {
            ctx->pc = 0x205D24u;
            return;
        }
    }
    ctx->pc = 0x2052B0u;
    // 0x2052b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2052b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2052b4: 0x14420020  bne         $v0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2052B4u;
    {
        const bool branch_taken_0x2052b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 2));
        ctx->pc = 0x2052B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052B4u;
        // 0x2052b8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052b4) {
            ctx->pc = 0x205338u;
            return;
        }
    }
    ctx->pc = 0x2052BCu;
    // 0x2052bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2052bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2052c0: 0x24454dd1  addiu       $a1, $v0, 0x4DD1
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19921));
    // 0x2052c4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2052c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2052c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2052cc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2052ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2052d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2052D0u;
    {
        const bool branch_taken_0x2052d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D0u;
        // 0x2052d4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052d0) {
            ctx->pc = 0x205334u;
            return;
        }
    }
    ctx->pc = 0x2052D8u;
    // 0x2052d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2052D8u;
    {
        const bool branch_taken_0x2052d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2052DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052D8u;
        // 0x2052dc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052d8) {
            ctx->pc = 0x2052F8u;
            return;
        }
    }
    ctx->pc = 0x2052E0u;
}
