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

// Function: entry_002028a4
// Address: 0x2028a4 - 0x202930
void entry_002028a4_0x2028a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002028a4_0x2028a4");
#endif

    switch (ctx->pc) {
        case 0x2028d4u: goto label_2028d4;
        default: break;
    }

    ctx->pc = 0x2028a4u;

    // 0x2028a4: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x2028a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2028a8: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x2028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x2028ac: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2028acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2028b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2028b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2028b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2028b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2028b8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2028bc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2028bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2028c0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2028c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2028c4: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x2028c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x2028c8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2028c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2028cc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2028CCu;
    SET_GPR_U32(ctx, 31, 0x2028D4u);
    ctx->pc = 0x2028D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028CCu;
    // 0x2028d0: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2028CCu, 0x2028D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028D4u;
label_2028d4:
    // 0x2028d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2028d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028d8: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2028dc: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x2028dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2028e0: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x2028e4: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x2028e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2028e8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2028e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2028ec: 0x0  nop
    ctx->pc = 0x2028ecu;
    // NOP
    // 0x2028f0: 0x0  nop
    ctx->pc = 0x2028f0u;
    // NOP
    // 0x2028f4: 0x0  nop
    ctx->pc = 0x2028f4u;
    // NOP
    // 0x2028f8: 0x0  nop
    ctx->pc = 0x2028f8u;
    // NOP
    // 0x2028fc: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2028FCu;
    {
        const bool branch_taken_0x2028fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028FCu;
        // 0x202900: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028fc) {
            ctx->pc = 0x20282Cu;
            return;
        }
    }
    ctx->pc = 0x202904u;
    // 0x202904: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x202908: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x202908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x20290c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20290Cu;
    {
        const bool branch_taken_0x20290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20290Cu;
        // 0x202910: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20290c) {
            ctx->pc = 0x202930u;
            return;
        }
    }
    ctx->pc = 0x202914u;
    // 0x202914: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x202914u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x202918: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x20291c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202924: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x202924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x202928: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x202928u;
    {
        const bool branch_taken_0x202928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202928u;
        // 0x20292c: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202928) {
            ctx->pc = 0x202A84u;
            return;
        }
    }
    ctx->pc = 0x202930u;
}
