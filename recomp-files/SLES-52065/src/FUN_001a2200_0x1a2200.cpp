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

// Function: FUN_001a2200
// Address: 0x1a2200 - 0x1a22d4
void FUN_001a2200_0x1a2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2200_0x1a2200");
#endif

    switch (ctx->pc) {
        case 0x1a223cu: goto label_1a223c;
        case 0x1a2268u: goto label_1a2268;
        case 0x1a2274u: goto label_1a2274;
        case 0x1a2280u: goto label_1a2280;
        case 0x1a228cu: goto label_1a228c;
        case 0x1a2298u: goto label_1a2298;
        case 0x1a22a4u: goto label_1a22a4;
        case 0x1a22bcu: goto label_1a22bc;
        default: break;
    }

    ctx->pc = 0x1a2200u;

    // 0x1a2200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a220c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2214: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A2214u;
    {
        const bool branch_taken_0x1a2214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2214u;
        // 0x1a2218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2214) {
            ctx->pc = 0x1A22BCu;
            goto label_1a22bc;
        }
    }
    ctx->pc = 0x1A221Cu;
    // 0x1a221c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a221cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a2220: 0x262208c0  addiu       $v0, $s1, 0x8C0
    ctx->pc = 0x1a2220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2240));
    // 0x1a2224: 0x2463b360  addiu       $v1, $v1, -0x4CA0
    ctx->pc = 0x1a2224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947680));
    // 0x1a2228: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A2228u;
    {
        const bool branch_taken_0x1a2228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2228u;
        // 0x1a222c: 0xae23031c  sw          $v1, 0x31C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2228) {
            ctx->pc = 0x1A2268u;
            goto label_1a2268;
        }
    }
    ctx->pc = 0x1A2230u;
    // 0x1a2230: 0x262408e0  addiu       $a0, $s1, 0x8E0
    ctx->pc = 0x1a2230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2272));
    // 0x1a2234: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A2234u;
    SET_GPR_U32(ctx, 31, 0x1A223Cu);
    ctx->pc = 0x1A2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2234u;
    // 0x1a2238: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A2234u, 0x1A223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A223Cu;
label_1a223c:
    // 0x1a223c: 0x262408c0  addiu       $a0, $s1, 0x8C0
    ctx->pc = 0x1a223cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2240));
    // 0x1a2240: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2240u;
    {
        const bool branch_taken_0x1a2240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2240u;
        // 0x1a2244: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2240) {
            ctx->pc = 0x1A2268u;
            goto label_1a2268;
        }
    }
    ctx->pc = 0x1A2248u;
    // 0x1a2248: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x1a2248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x1a224c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A224Cu;
    {
        const bool branch_taken_0x1a224c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A224Cu;
        // 0x1a2250: 0xae2208cc  sw          $v0, 0x8CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a224c) {
            ctx->pc = 0x1A2268u;
            goto label_1a2268;
        }
    }
    ctx->pc = 0x1A2254u;
    // 0x1a2254: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a2254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a2258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a225c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1a225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1a2260: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1A2260u;
    SET_GPR_U32(ctx, 31, 0x1A2268u);
    ctx->pc = 0x1A2264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2260u;
    // 0x1a2264: 0xae2208cc  sw          $v0, 0x8CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1A2260u, 0x1A2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2268u;
label_1a2268:
    // 0x1a2268: 0x262408a0  addiu       $a0, $s1, 0x8A0
    ctx->pc = 0x1a2268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
    // 0x1a226c: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x1A226Cu;
    SET_GPR_U32(ctx, 31, 0x1A2274u);
    ctx->pc = 0x1A2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A226Cu;
    // 0x1a2270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x1A226Cu, 0x1A2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2274u;
label_1a2274:
    // 0x1a2274: 0x26240800  addiu       $a0, $s1, 0x800
    ctx->pc = 0x1a2274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2048));
    // 0x1a2278: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A2278u;
    SET_GPR_U32(ctx, 31, 0x1A2280u);
    ctx->pc = 0x1A227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2278u;
    // 0x1a227c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A2278u, 0x1A2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2280u;
label_1a2280:
    // 0x1a2280: 0x26240760  addiu       $a0, $s1, 0x760
    ctx->pc = 0x1a2280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1888));
    // 0x1a2284: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A2284u;
    SET_GPR_U32(ctx, 31, 0x1A228Cu);
    ctx->pc = 0x1A2288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2284u;
    // 0x1a2288: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A2284u, 0x1A228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A228Cu;
label_1a228c:
    // 0x1a228c: 0x262406c0  addiu       $a0, $s1, 0x6C0
    ctx->pc = 0x1a228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
    // 0x1a2290: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1A2290u;
    SET_GPR_U32(ctx, 31, 0x1A2298u);
    ctx->pc = 0x1A2294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2290u;
    // 0x1a2294: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1A2290u, 0x1A2298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2298u;
label_1a2298:
    // 0x1a2298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a229c: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A229Cu;
    SET_GPR_U32(ctx, 31, 0x1A22A4u);
    ctx->pc = 0x1A22A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A229Cu;
    // 0x1a22a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A229Cu, 0x1A22A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22A4u;
label_1a22a4:
    // 0x1a22a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a22a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a22a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a22a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a22ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A22ACu;
    {
        const bool branch_taken_0x1a22ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22ACu;
        // 0x1a22b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22ac) {
            ctx->pc = 0x1A22C0u;
            goto label_1a22c0;
        }
    }
    ctx->pc = 0x1A22B4u;
    // 0x1a22b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A22B4u;
    SET_GPR_U32(ctx, 31, 0x1A22BCu);
    ctx->pc = 0x1A22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22B4u;
    // 0x1a22b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A22B4u, 0x1A22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22BCu;
label_1a22bc:
    // 0x1a22bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a22bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a22c0:
    // 0x1a22c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a22c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a22c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a22c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a22c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a22c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a22cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A22CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22CCu;
        // 0x1a22d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A22CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A22D4u;
}
