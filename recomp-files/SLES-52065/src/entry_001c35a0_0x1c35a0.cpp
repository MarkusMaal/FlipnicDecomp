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

// Function: entry_001c35a0
// Address: 0x1c35a0 - 0x1c3658
void entry_001c35a0_0x1c35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c35a0_0x1c35a0");
#endif

    switch (ctx->pc) {
        case 0x1c35b0u: goto label_1c35b0;
        default: break;
    }

    ctx->pc = 0x1c35a0u;

    // 0x1c35a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c35a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c35a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35a8: 0xc071160  jal         func_1C4580
    ctx->pc = 0x1C35A8u;
    SET_GPR_U32(ctx, 31, 0x1C35B0u);
    ctx->pc = 0x1C35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35A8u;
    // 0x1c35ac: 0xac20f5e8  sw          $zero, -0xA18($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964712), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4580u, 0x1C35A8u, 0x1C35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35B0u;
label_1c35b0:
    // 0x1c35b0: 0xa2000264  sb          $zero, 0x264($s0)
    ctx->pc = 0x1c35b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c35b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c35b8: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1c35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1c35bc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C35BCu;
    {
        const bool branch_taken_0x1c35bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35BCu;
        // 0x1c35c0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35bc) {
            ctx->pc = 0x1C3688u;
            return;
        }
    }
    ctx->pc = 0x1C35C4u;
    // 0x1c35c4: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c35c8: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C35C8u;
    {
        const bool branch_taken_0x1c35c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35C8u;
        // 0x1c35cc: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35c8) {
            ctx->pc = 0x1C3680u;
            return;
        }
    }
    ctx->pc = 0x1C35D0u;
    // 0x1c35d0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c35d4: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C35D4u;
    {
        const bool branch_taken_0x1c35d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35D4u;
        // 0x1c35d8: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35d4) {
            ctx->pc = 0x1C367Cu;
            return;
        }
    }
    ctx->pc = 0x1C35DCu;
    // 0x1c35dc: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C35DCu;
    {
        const bool branch_taken_0x1c35dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c35dc) {
            ctx->pc = 0x1C367Cu;
            return;
        }
    }
    ctx->pc = 0x1C35E4u;
    // 0x1c35e4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c35e8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C35E8u;
    {
        const bool branch_taken_0x1c35e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35E8u;
        // 0x1c35ec: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35e8) {
            ctx->pc = 0x1C367Cu;
            return;
        }
    }
    ctx->pc = 0x1C35F0u;
    // 0x1c35f0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C35F0u;
    {
        const bool branch_taken_0x1c35f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c35f0) {
            ctx->pc = 0x1C367Cu;
            return;
        }
    }
    ctx->pc = 0x1C35F8u;
    // 0x1c35f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c35fc: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C35FCu;
    {
        const bool branch_taken_0x1c35fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35FCu;
        // 0x1c3600: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35fc) {
            ctx->pc = 0x1C3674u;
            return;
        }
    }
    ctx->pc = 0x1C3604u;
    // 0x1c3604: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3608: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3608u;
    {
        const bool branch_taken_0x1c3608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3608u;
        // 0x1c360c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3608) {
            ctx->pc = 0x1C3670u;
            return;
        }
    }
    ctx->pc = 0x1C3610u;
    // 0x1c3610: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3610u;
    {
        const bool branch_taken_0x1c3610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3610) {
            ctx->pc = 0x1C3670u;
            return;
        }
    }
    ctx->pc = 0x1C3618u;
    // 0x1c3618: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c361c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C361Cu;
    {
        const bool branch_taken_0x1c361c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C361Cu;
        // 0x1c3620: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c361c) {
            ctx->pc = 0x1C3670u;
            return;
        }
    }
    ctx->pc = 0x1C3624u;
    // 0x1c3624: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3624u;
    {
        const bool branch_taken_0x1c3624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3624) {
            ctx->pc = 0x1C3670u;
            return;
        }
    }
    ctx->pc = 0x1C362Cu;
    // 0x1c362c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c3630: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3630u;
    {
        const bool branch_taken_0x1c3630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3630u;
        // 0x1c3634: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3630) {
            ctx->pc = 0x1C3668u;
            return;
        }
    }
    ctx->pc = 0x1C3638u;
    // 0x1c3638: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c363c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C363Cu;
    {
        const bool branch_taken_0x1c363c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C363Cu;
        // 0x1c3640: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c363c) {
            ctx->pc = 0x1C3660u;
            return;
        }
    }
    ctx->pc = 0x1C3644u;
    // 0x1c3644: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3648: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3648u;
    {
        const bool branch_taken_0x1c3648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3648u;
        // 0x1c364c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3648) {
            ctx->pc = 0x1C3658u;
            return;
        }
    }
    ctx->pc = 0x1C3650u;
    // 0x1c3650: 0x1000036d  b           . + 4 + (0x36D << 2)
    ctx->pc = 0x1C3650u;
    {
        const bool branch_taken_0x1c3650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3650) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3658u;
}
