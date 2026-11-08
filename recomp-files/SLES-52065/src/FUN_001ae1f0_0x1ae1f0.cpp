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

// Function: FUN_001ae1f0
// Address: 0x1ae1f0 - 0x1ae260
void FUN_001ae1f0_0x1ae1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae1f0_0x1ae1f0");
#endif

    switch (ctx->pc) {
        case 0x1ae230u: goto label_1ae230;
        case 0x1ae248u: goto label_1ae248;
        default: break;
    }

    ctx->pc = 0x1ae1f0u;

    // 0x1ae1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ae1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae204: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE204u;
    {
        const bool branch_taken_0x1ae204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE204u;
        // 0x1ae208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae204) {
            ctx->pc = 0x1AE248u;
            goto label_1ae248;
        }
    }
    ctx->pc = 0x1AE20Cu;
    // 0x1ae20c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ae210: 0x2442b790  addiu       $v0, $v0, -0x4870
    ctx->pc = 0x1ae210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948752));
    // 0x1ae214: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE214u;
    {
        const bool branch_taken_0x1ae214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE214u;
        // 0x1ae218: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae214) {
            ctx->pc = 0x1AE230u;
            goto label_1ae230;
        }
    }
    ctx->pc = 0x1AE21Cu;
    // 0x1ae21c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1ae21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1ae220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae224: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1ae224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1ae228: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AE228u;
    SET_GPR_U32(ctx, 31, 0x1AE230u);
    ctx->pc = 0x1AE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE228u;
    // 0x1ae22c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AE228u, 0x1AE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE230u;
label_1ae230:
    // 0x1ae230: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ae230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ae234: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ae234u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ae238: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE238u;
    {
        const bool branch_taken_0x1ae238 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE238u;
        // 0x1ae23c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae238) {
            ctx->pc = 0x1AE24Cu;
            goto label_1ae24c;
        }
    }
    ctx->pc = 0x1AE240u;
    // 0x1ae240: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AE240u;
    SET_GPR_U32(ctx, 31, 0x1AE248u);
    ctx->pc = 0x1AE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE240u;
    // 0x1ae244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AE240u, 0x1AE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE248u;
label_1ae248:
    // 0x1ae248: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ae248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae24c:
    // 0x1ae24c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae258: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE258u;
        // 0x1ae25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE260u;
}
