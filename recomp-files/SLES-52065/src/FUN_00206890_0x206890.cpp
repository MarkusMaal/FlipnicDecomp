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

// Function: FUN_00206890
// Address: 0x206890 - 0x20697c
void FUN_00206890_0x206890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206890_0x206890");
#endif

    switch (ctx->pc) {
        case 0x2068b0u: goto label_2068b0;
        case 0x2068c8u: goto label_2068c8;
        case 0x2068d0u: goto label_2068d0;
        case 0x2068e4u: goto label_2068e4;
        case 0x2068f8u: goto label_2068f8;
        case 0x206904u: goto label_206904;
        case 0x206910u: goto label_206910;
        case 0x206924u: goto label_206924;
        case 0x206934u: goto label_206934;
        case 0x20693cu: goto label_20693c;
        case 0x206954u: goto label_206954;
        default: break;
    }

    ctx->pc = 0x206890u;

    // 0x206890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x206890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x206894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x206894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206898: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x206898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20689c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20689cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2068a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2068a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2068a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2068a8: 0xc082178  jal         func_2085E0
    ctx->pc = 0x2068A8u;
    SET_GPR_U32(ctx, 31, 0x2068B0u);
    ctx->pc = 0x2068ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068A8u;
    // 0x2068ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x2068A8u, 0x2068B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068B0u;
label_2068b0:
    // 0x2068b0: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2068B0u;
    {
        const bool branch_taken_0x2068b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2068B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068B0u;
        // 0x2068b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068b0) {
            ctx->pc = 0x206964u;
            goto label_206964;
        }
    }
    ctx->pc = 0x2068B8u;
    // 0x2068b8: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x2068b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x2068bc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2068bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2068c0: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2068C0u;
    SET_GPR_U32(ctx, 31, 0x2068C8u);
    ctx->pc = 0x2068C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068C0u;
    // 0x2068c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2068C0u, 0x2068C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068C8u;
label_2068c8:
    // 0x2068c8: 0xc0821e0  jal         func_208780
    ctx->pc = 0x2068C8u;
    SET_GPR_U32(ctx, 31, 0x2068D0u);
    ctx->pc = 0x2068CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068C8u;
    // 0x2068cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208780u, 0x2068C8u, 0x2068D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068D0u;
label_2068d0:
    // 0x2068d0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2068d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2068d4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2068D4u;
    {
        const bool branch_taken_0x2068d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068D4u;
        // 0x2068d8: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068d4) {
            ctx->pc = 0x2068ECu;
            goto label_2068ec;
        }
    }
    ctx->pc = 0x2068DCu;
    // 0x2068dc: 0xc081a60  jal         func_206980
    ctx->pc = 0x2068DCu;
    SET_GPR_U32(ctx, 31, 0x2068E4u);
    ctx->pc = 0x2068E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068DCu;
    // 0x2068e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x2068DCu, 0x2068E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068E4u;
label_2068e4:
    // 0x2068e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2068E4u;
    {
        const bool branch_taken_0x2068e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068E4u;
        // 0x2068e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068e4) {
            ctx->pc = 0x206908u;
            goto label_206908;
        }
    }
    ctx->pc = 0x2068ECu;
label_2068ec:
    // 0x2068ec: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x2068ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x2068f0: 0xc081a60  jal         func_206980
    ctx->pc = 0x2068F0u;
    SET_GPR_U32(ctx, 31, 0x2068F8u);
    ctx->pc = 0x2068F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068F0u;
    // 0x2068f4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x2068F0u, 0x2068F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068F8u;
label_2068f8:
    // 0x2068f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2068f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068fc: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2068FCu;
    SET_GPR_U32(ctx, 31, 0x206904u);
    ctx->pc = 0x206900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068FCu;
    // 0x206900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2068FCu, 0x206904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206904u;
label_206904:
    // 0x206904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206908:
    // 0x206908: 0xc082014  jal         func_208050
    ctx->pc = 0x206908u;
    SET_GPR_U32(ctx, 31, 0x206910u);
    ctx->pc = 0x20690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206908u;
    // 0x20690c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x206908u, 0x206910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206910u;
label_206910:
    // 0x206910: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x206910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x206918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20691c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x20691Cu;
    SET_GPR_U32(ctx, 31, 0x206924u);
    ctx->pc = 0x206920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20691Cu;
    // 0x206920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x20691Cu, 0x206924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206924u;
label_206924:
    // 0x206924: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206924u;
    {
        const bool branch_taken_0x206924 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x206928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206924u;
        // 0x206928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206924) {
            ctx->pc = 0x20694Cu;
            goto label_20694c;
        }
    }
    ctx->pc = 0x20692Cu;
    // 0x20692c: 0xc082014  jal         func_208050
    ctx->pc = 0x20692Cu;
    SET_GPR_U32(ctx, 31, 0x206934u);
    ctx->pc = 0x206930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20692Cu;
    // 0x206930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x20692Cu, 0x206934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206934u;
label_206934:
    // 0x206934: 0xc0821e0  jal         func_208780
    ctx->pc = 0x206934u;
    SET_GPR_U32(ctx, 31, 0x20693Cu);
    ctx->pc = 0x206938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206934u;
    // 0x206938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208780u, 0x206934u, 0x20693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20693Cu;
label_20693c:
    // 0x20693c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206940: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x206940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206944u;
    {
        const bool branch_taken_0x206944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206944u;
        // 0x206948: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206944) {
            ctx->pc = 0x206960u;
            goto label_206960;
        }
    }
    ctx->pc = 0x20694Cu;
label_20694c:
    // 0x20694c: 0xc0821e0  jal         func_208780
    ctx->pc = 0x20694Cu;
    SET_GPR_U32(ctx, 31, 0x206954u);
    ctx->pc = 0x206950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20694Cu;
    // 0x206950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208780u, 0x20694Cu, 0x206954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206954u;
label_206954:
    // 0x206954: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206958: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x206958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x20695c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x20695cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_206960:
    // 0x206960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x206960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206964:
    // 0x206964: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x206964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206968: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x206968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20696c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20696cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206974: 0x3e00008  jr          $ra
    ctx->pc = 0x206974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206974u;
        // 0x206978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20697Cu;
}
