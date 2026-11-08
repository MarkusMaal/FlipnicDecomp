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

// Function: FUN_001c2240
// Address: 0x1c2240 - 0x1c2c90
void FUN_001c2240_0x1c2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2240_0x1c2240");
#endif

    switch (ctx->pc) {
        case 0x1c2260u: goto label_1c2260;
        case 0x1c2378u: goto label_1c2378;
        case 0x1c238cu: goto label_1c238c;
        case 0x1c23a0u: goto label_1c23a0;
        case 0x1c23b8u: goto label_1c23b8;
        case 0x1c23ccu: goto label_1c23cc;
        case 0x1c23e0u: goto label_1c23e0;
        case 0x1c23f8u: goto label_1c23f8;
        case 0x1c240cu: goto label_1c240c;
        case 0x1c2428u: goto label_1c2428;
        case 0x1c243cu: goto label_1c243c;
        case 0x1c2454u: goto label_1c2454;
        case 0x1c2468u: goto label_1c2468;
        case 0x1c2480u: goto label_1c2480;
        case 0x1c24ecu: goto label_1c24ec;
        case 0x1c2504u: goto label_1c2504;
        case 0x1c250cu: goto label_1c250c;
        case 0x1c251cu: goto label_1c251c;
        case 0x1c2524u: goto label_1c2524;
        case 0x1c2530u: goto label_1c2530;
        case 0x1c2544u: goto label_1c2544;
        case 0x1c257cu: goto label_1c257c;
        case 0x1c2588u: goto label_1c2588;
        case 0x1c2594u: goto label_1c2594;
        case 0x1c25a0u: goto label_1c25a0;
        case 0x1c25acu: goto label_1c25ac;
        case 0x1c25b8u: goto label_1c25b8;
        case 0x1c25ccu: goto label_1c25cc;
        case 0x1c25d8u: goto label_1c25d8;
        case 0x1c25e4u: goto label_1c25e4;
        case 0x1c25f0u: goto label_1c25f0;
        case 0x1c25fcu: goto label_1c25fc;
        case 0x1c2608u: goto label_1c2608;
        case 0x1c2614u: goto label_1c2614;
        case 0x1c2658u: goto label_1c2658;
        case 0x1c2680u: goto label_1c2680;
        case 0x1c2718u: goto label_1c2718;
        case 0x1c2748u: goto label_1c2748;
        case 0x1c2770u: goto label_1c2770;
        case 0x1c279cu: goto label_1c279c;
        case 0x1c27d0u: goto label_1c27d0;
        case 0x1c27f8u: goto label_1c27f8;
        case 0x1c2810u: goto label_1c2810;
        case 0x1c2838u: goto label_1c2838;
        case 0x1c2850u: goto label_1c2850;
        case 0x1c2878u: goto label_1c2878;
        case 0x1c2890u: goto label_1c2890;
        case 0x1c28c8u: goto label_1c28c8;
        case 0x1c28ccu: goto label_1c28cc;
        case 0x1c28f4u: goto label_1c28f4;
        case 0x1c292cu: goto label_1c292c;
        case 0x1c2930u: goto label_1c2930;
        case 0x1c2958u: goto label_1c2958;
        case 0x1c2990u: goto label_1c2990;
        case 0x1c2994u: goto label_1c2994;
        case 0x1c29b4u: goto label_1c29b4;
        case 0x1c29c8u: goto label_1c29c8;
        case 0x1c29ecu: goto label_1c29ec;
        case 0x1c2a0cu: goto label_1c2a0c;
        case 0x1c2a44u: goto label_1c2a44;
        case 0x1c2a6cu: goto label_1c2a6c;
        case 0x1c2aa4u: goto label_1c2aa4;
        case 0x1c2accu: goto label_1c2acc;
        case 0x1c2b04u: goto label_1c2b04;
        case 0x1c2b44u: goto label_1c2b44;
        case 0x1c2b88u: goto label_1c2b88;
        case 0x1c2bacu: goto label_1c2bac;
        case 0x1c2bd4u: goto label_1c2bd4;
        case 0x1c2becu: goto label_1c2bec;
        case 0x1c2c00u: goto label_1c2c00;
        case 0x1c2c0cu: goto label_1c2c0c;
        case 0x1c2c14u: goto label_1c2c14;
        case 0x1c2c38u: goto label_1c2c38;
        case 0x1c2c54u: goto label_1c2c54;
        case 0x1c2c60u: goto label_1c2c60;
        case 0x1c2c70u: goto label_1c2c70;
        case 0x1c2c7cu: goto label_1c2c7c;
        default: break;
    }

    ctx->pc = 0x1c2240u;

    // 0x1c2240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c224c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c224cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2258: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C2258u;
    SET_GPR_U32(ctx, 31, 0x1C2260u);
    ctx->pc = 0x1C225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2258u;
    // 0x1c225c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C2258u, 0x1C2260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2260u;
label_1c2260:
    // 0x1c2260: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2264: 0x8022f5c8  lb          $v0, -0xA38($at)
    ctx->pc = 0x1c2264u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F5C8u));
    // 0x1c2268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2268u;
    {
        const bool branch_taken_0x1c2268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2268u;
        // 0x1c226c: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2268) {
            ctx->pc = 0x1C2280u;
            goto label_1c2280;
        }
    }
    ctx->pc = 0x1C2270u;
    // 0x1c2270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2274: 0xac20f5c0  sw          $zero, -0xA40($at)
    ctx->pc = 0x1c2274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964672), GPR_U32(ctx, 0));
    // 0x1c2278: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c227c: 0xa022f5c8  sb          $v0, -0xA38($at)
    ctx->pc = 0x1c227cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F5C8u, _value); } while (0);
label_1c2280:
    // 0x1c2280: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x1c2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1c2284: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1c2284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c2288: 0x10430079  beq         $v0, $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1C2288u;
    {
        const bool branch_taken_0x1c2288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2288u;
        // 0x1c228c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2288) {
            ctx->pc = 0x1C2470u;
            goto label_1c2470;
        }
    }
    ctx->pc = 0x1C2290u;
    // 0x1c2290: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1c2290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c2294: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1C2294u;
    {
        const bool branch_taken_0x1c2294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2294u;
        // 0x1c2298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2294) {
            ctx->pc = 0x1C2444u;
            goto label_1c2444;
        }
    }
    ctx->pc = 0x1C229Cu;
    // 0x1c229c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1c229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c22a0: 0x10430069  beq         $v0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1C22A0u;
    {
        const bool branch_taken_0x1c22a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22A0u;
        // 0x1c22a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22a0) {
            ctx->pc = 0x1C2448u;
            goto label_1c2448;
        }
    }
    ctx->pc = 0x1C22A8u;
    // 0x1c22a8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1c22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c22ac: 0x1043005a  beq         $v0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1C22ACu;
    {
        const bool branch_taken_0x1c22ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22ACu;
        // 0x1c22b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22ac) {
            ctx->pc = 0x1C2418u;
            goto label_1c2418;
        }
    }
    ctx->pc = 0x1C22B4u;
    // 0x1c22b4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1c22b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c22b8: 0x10430056  beq         $v0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1C22B8u;
    {
        const bool branch_taken_0x1c22b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22B8u;
        // 0x1c22bc: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22b8) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C22C0u;
    // 0x1c22c0: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1C22C0u;
    {
        const bool branch_taken_0x1c22c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22c0) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C22C8u;
    // 0x1c22c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c22cc: 0x10430051  beq         $v0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C22CCu;
    {
        const bool branch_taken_0x1c22cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22CCu;
        // 0x1c22d0: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22cc) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C22D4u;
    // 0x1c22d4: 0x1043004f  beq         $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C22D4u;
    {
        const bool branch_taken_0x1c22d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22d4) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C22DCu;
    // 0x1c22dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c22e0: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C22E0u;
    {
        const bool branch_taken_0x1c22e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22E0u;
        // 0x1c22e4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22e0) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C22E8u;
    // 0x1c22e8: 0x1043004a  beq         $v0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C22E8u;
    {
        const bool branch_taken_0x1c22e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22e8) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C22F0u;
    // 0x1c22f0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c22f4: 0x10430047  beq         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1C22F4u;
    {
        const bool branch_taken_0x1c22f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22F4u;
        // 0x1c22f8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22f4) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C22FCu;
    // 0x1c22fc: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C22FCu;
    {
        const bool branch_taken_0x1c22fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c22fc) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2304u;
    // 0x1c2304: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c2308: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1C2308u;
    {
        const bool branch_taken_0x1c2308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2308u;
        // 0x1c230c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2308) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2310u;
    // 0x1c2310: 0x10430040  beq         $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C2310u;
    {
        const bool branch_taken_0x1c2310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2310u;
        // 0x1c2314: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2310) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2318u;
    // 0x1c2318: 0x1046003e  beq         $v0, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C2318u;
    {
        const bool branch_taken_0x1c2318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2318u;
        // 0x1c231c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2318) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2320u;
    // 0x1c2320: 0x1043003c  beq         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C2320u;
    {
        const bool branch_taken_0x1c2320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2320u;
        // 0x1c2324: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2320) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2328u;
    // 0x1c2328: 0x1044003a  beq         $v0, $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C2328u;
    {
        const bool branch_taken_0x1c2328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2328u;
        // 0x1c232c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2328) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2330u;
    // 0x1c2330: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C2330u;
    {
        const bool branch_taken_0x1c2330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2330u;
        // 0x1c2334: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2330) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2338u;
    // 0x1c2338: 0x10500036  beq         $v0, $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C2338u;
    {
        const bool branch_taken_0x1c2338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2338u;
        // 0x1c233c: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2338) {
            ctx->pc = 0x1C2414u;
            goto label_1c2414;
        }
    }
    ctx->pc = 0x1C2340u;
    // 0x1c2340: 0x10430050  beq         $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C2340u;
    {
        const bool branch_taken_0x1c2340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2340) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C2348u;
    // 0x1c2348: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1c2348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c234c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C234Cu;
    {
        const bool branch_taken_0x1c234c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C234Cu;
        // 0x1c2350: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c234c) {
            ctx->pc = 0x1C23E8u;
            goto label_1c23e8;
        }
    }
    ctx->pc = 0x1C2354u;
    // 0x1c2354: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C2354u;
    {
        const bool branch_taken_0x1c2354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2354) {
            ctx->pc = 0x1C23A8u;
            goto label_1c23a8;
        }
    }
    ctx->pc = 0x1C235Cu;
    // 0x1c235c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c235cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2360: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2360u;
    {
        const bool branch_taken_0x1c2360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2360u;
        // 0x1c2364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2360) {
            ctx->pc = 0x1C2370u;
            goto label_1c2370;
        }
    }
    ctx->pc = 0x1C2368u;
    // 0x1c2368: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C2368u;
    {
        const bool branch_taken_0x1c2368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2368u;
        // 0x1c236c: 0x8e230248  lw          $v1, 0x248($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2368) {
            ctx->pc = 0x1C2488u;
            goto label_1c2488;
        }
    }
    ctx->pc = 0x1C2370u;
label_1c2370:
    // 0x1c2370: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2370u;
    SET_GPR_U32(ctx, 31, 0x1C2378u);
    ctx->pc = 0x1C2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2370u;
    // 0x1c2374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2370u, 0x1C2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2378u;
label_1c2378:
    // 0x1c2378: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c237c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2384: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2384u;
    SET_GPR_U32(ctx, 31, 0x1C238Cu);
    ctx->pc = 0x1C2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2384u;
    // 0x1c2388: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2384u, 0x1C238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C238Cu;
label_1c238c:
    // 0x1c238c: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c238cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c2390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2398: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2398u;
    SET_GPR_U32(ctx, 31, 0x1C23A0u);
    ctx->pc = 0x1C239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2398u;
    // 0x1c239c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2398u, 0x1C23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23A0u;
label_1c23a0:
    // 0x1c23a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C23A0u;
    {
        const bool branch_taken_0x1c23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23A0u;
        // 0x1c23a4: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23a0) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C23A8u;
label_1c23a8:
    // 0x1c23a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c23a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23B0u;
    SET_GPR_U32(ctx, 31, 0x1C23B8u);
    ctx->pc = 0x1C23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23B0u;
    // 0x1c23b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23B0u, 0x1C23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23B8u;
label_1c23b8:
    // 0x1c23b8: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c23b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c23bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23c4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23C4u;
    SET_GPR_U32(ctx, 31, 0x1C23CCu);
    ctx->pc = 0x1C23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23C4u;
    // 0x1c23c8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23C4u, 0x1C23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23CCu;
label_1c23cc:
    // 0x1c23cc: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c23ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c23d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23D8u;
    SET_GPR_U32(ctx, 31, 0x1C23E0u);
    ctx->pc = 0x1C23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23D8u;
    // 0x1c23dc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23D8u, 0x1C23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23E0u;
label_1c23e0:
    // 0x1c23e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C23E0u;
    {
        const bool branch_taken_0x1c23e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23E0u;
        // 0x1c23e4: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23e0) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C23E8u;
label_1c23e8:
    // 0x1c23e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c23ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C23F0u;
    SET_GPR_U32(ctx, 31, 0x1C23F8u);
    ctx->pc = 0x1C23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23F0u;
    // 0x1c23f4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C23F0u, 0x1C23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23F8u;
label_1c23f8:
    // 0x1c23f8: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c23f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c23fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c23fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2404: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2404u;
    SET_GPR_U32(ctx, 31, 0x1C240Cu);
    ctx->pc = 0x1C2408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2404u;
    // 0x1c2408: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2404u, 0x1C240Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C240Cu;
label_1c240c:
    // 0x1c240c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C240Cu;
    {
        const bool branch_taken_0x1c240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C240Cu;
        // 0x1c2410: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c240c) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C2414u;
label_1c2414:
    // 0x1c2414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2418:
    // 0x1c2418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c241c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c2420: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2420u;
    SET_GPR_U32(ctx, 31, 0x1C2428u);
    ctx->pc = 0x1C2424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2420u;
    // 0x1c2424: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2420u, 0x1C2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2428u;
label_1c2428:
    // 0x1c2428: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c242c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2434: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2434u;
    SET_GPR_U32(ctx, 31, 0x1C243Cu);
    ctx->pc = 0x1C2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2434u;
    // 0x1c2438: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2434u, 0x1C243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C243Cu;
label_1c243c:
    // 0x1c243c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C243Cu;
    {
        const bool branch_taken_0x1c243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C243Cu;
        // 0x1c2440: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c243c) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C2444u;
label_1c2444:
    // 0x1c2444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2448:
    // 0x1c2448: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c2448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c244c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C244Cu;
    SET_GPR_U32(ctx, 31, 0x1C2454u);
    ctx->pc = 0x1C2450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C244Cu;
    // 0x1c2450: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C244Cu, 0x1C2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2454u;
label_1c2454:
    // 0x1c2454: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2454u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c2458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c245c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2460: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2460u;
    SET_GPR_U32(ctx, 31, 0x1C2468u);
    ctx->pc = 0x1C2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2460u;
    // 0x1c2464: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2460u, 0x1C2468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2468u;
label_1c2468:
    // 0x1c2468: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2468u;
    {
        const bool branch_taken_0x1c2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2468u;
        // 0x1c246c: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2468) {
            ctx->pc = 0x1C2484u;
            goto label_1c2484;
        }
    }
    ctx->pc = 0x1C2470u;
label_1c2470:
    // 0x1c2470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2474: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1c2474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c2478: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2478u;
    SET_GPR_U32(ctx, 31, 0x1C2480u);
    ctx->pc = 0x1C247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2478u;
    // 0x1c247c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2478u, 0x1C2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2480u;
label_1c2480:
    // 0x1c2480: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1c2480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
label_1c2484:
    // 0x1c2484: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x1c2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
label_1c2488:
    // 0x1c2488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c248c: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C248Cu;
    {
        const bool branch_taken_0x1c248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C248Cu;
        // 0x1c2490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c248c) {
            ctx->pc = 0x1C25C0u;
            goto label_1c25c0;
        }
    }
    ctx->pc = 0x1C2494u;
    // 0x1c2494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2498: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C2498u;
    {
        const bool branch_taken_0x1c2498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2498u;
        // 0x1c249c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2498) {
            ctx->pc = 0x1C25C4u;
            goto label_1c25c4;
        }
    }
    ctx->pc = 0x1C24A0u;
    // 0x1c24a0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1c24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c24a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C24A4u;
    {
        const bool branch_taken_0x1c24a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24A4u;
        // 0x1c24a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24a4) {
            ctx->pc = 0x1C24CCu;
            goto label_1c24cc;
        }
    }
    ctx->pc = 0x1C24ACu;
    // 0x1c24ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c24b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C24B0u;
    {
        const bool branch_taken_0x1c24b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24B0u;
        // 0x1c24b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24b0) {
            ctx->pc = 0x1C24C8u;
            goto label_1c24c8;
        }
    }
    ctx->pc = 0x1C24B8u;
    // 0x1c24b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C24B8u;
    {
        const bool branch_taken_0x1c24b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c24b8) {
            ctx->pc = 0x1C24C8u;
            goto label_1c24c8;
        }
    }
    ctx->pc = 0x1C24C0u;
    // 0x1c24c0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1C24C0u;
    {
        const bool branch_taken_0x1c24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C0u;
        // 0x1c24c4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24c0) {
            ctx->pc = 0x1C260Cu;
            goto label_1c260c;
        }
    }
    ctx->pc = 0x1C24C8u;
label_1c24c8:
    // 0x1c24c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c24c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c24cc:
    // 0x1c24cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c24ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c24d0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c24d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c24d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c24d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c24dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c24dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24e0: 0x262a0250  addiu       $t2, $s1, 0x250
    ctx->pc = 0x1c24e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x1c24e4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C24E4u;
    SET_GPR_U32(ctx, 31, 0x1C24ECu);
    ctx->pc = 0x1C24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24E4u;
    // 0x1c24e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C24E4u, 0x1C24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C24ECu;
label_1c24ec:
    // 0x1c24ec: 0x8e260250  lw          $a2, 0x250($s1)
    ctx->pc = 0x1c24ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1c24f0: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x1c24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1c24f4: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C24F4u;
    {
        const bool branch_taken_0x1c24f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24F4u;
        // 0x1c24f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24f4) {
            ctx->pc = 0x1C2530u;
            goto label_1c2530;
        }
    }
    ctx->pc = 0x1C24FCu;
    // 0x1c24fc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C24FCu;
    SET_GPR_U32(ctx, 31, 0x1C2504u);
    ctx->pc = 0x1C2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24FCu;
    // 0x1c2500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C24FCu, 0x1C2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2504u;
label_1c2504:
    // 0x1c2504: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C2504u;
    SET_GPR_U32(ctx, 31, 0x1C250Cu);
    ctx->pc = 0x1C2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2504u;
    // 0x1c2508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C2504u, 0x1C250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C250Cu;
label_1c250c:
    // 0x1c250c: 0x8e260254  lw          $a2, 0x254($s1)
    ctx->pc = 0x1c250cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1c2510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2514: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2514u;
    SET_GPR_U32(ctx, 31, 0x1C251Cu);
    ctx->pc = 0x1C2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2514u;
    // 0x1c2518: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2514u, 0x1C251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C251Cu;
label_1c251c:
    // 0x1c251c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C251Cu;
    SET_GPR_U32(ctx, 31, 0x1C2524u);
    ctx->pc = 0x1C2520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C251Cu;
    // 0x1c2520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C251Cu, 0x1C2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2524u;
label_1c2524:
    // 0x1c2524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2528: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1C2528u;
    SET_GPR_U32(ctx, 31, 0x1C2530u);
    ctx->pc = 0x1C252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2528u;
    // 0x1c252c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1C2528u, 0x1C2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2530u;
label_1c2530:
    // 0x1c2530: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1c2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1c2534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2538: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c2538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c253c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C253Cu;
    SET_GPR_U32(ctx, 31, 0x1C2544u);
    ctx->pc = 0x1C2540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C253Cu;
    // 0x1c2540: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C253Cu, 0x1C2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2544u;
label_1c2544:
    // 0x1c2544: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2544u;
    {
        const bool branch_taken_0x1c2544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2544u;
        // 0x1c2548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2544) {
            ctx->pc = 0x1C2574u;
            goto label_1c2574;
        }
    }
    ctx->pc = 0x1C254Cu;
    // 0x1c254c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1c254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1c2550: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2550u;
    {
        const bool branch_taken_0x1c2550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2550u;
        // 0x1c2554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2550) {
            ctx->pc = 0x1C2564u;
            goto label_1c2564;
        }
    }
    ctx->pc = 0x1C2558u;
    // 0x1c2558: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c2558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c255c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C255Cu;
    {
        const bool branch_taken_0x1c255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C255Cu;
        // 0x1c2560: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c255c) {
            ctx->pc = 0x1C2570u;
            goto label_1c2570;
        }
    }
    ctx->pc = 0x1C2564u;
label_1c2564:
    // 0x1c2564: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2568: 0xac22f5c0  sw          $v0, -0xA40($at)
    ctx->pc = 0x1c2568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5C0u, _value); } while (0);
    // 0x1c256c: 0xae200248  sw          $zero, 0x248($s1)
    ctx->pc = 0x1c256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
label_1c2570:
    // 0x1c2570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2574:
    // 0x1c2574: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C2574u;
    SET_GPR_U32(ctx, 31, 0x1C257Cu);
    ctx->pc = 0x1C2578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2574u;
    // 0x1c2578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C2574u, 0x1C257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C257Cu;
label_1c257c:
    // 0x1c257c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2580: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2580u;
    SET_GPR_U32(ctx, 31, 0x1C2588u);
    ctx->pc = 0x1C2584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2580u;
    // 0x1c2584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2580u, 0x1C2588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2588u;
label_1c2588:
    // 0x1c2588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c258c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C258Cu;
    SET_GPR_U32(ctx, 31, 0x1C2594u);
    ctx->pc = 0x1C2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C258Cu;
    // 0x1c2590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C258Cu, 0x1C2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2594u;
label_1c2594:
    // 0x1c2594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2598: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2598u;
    SET_GPR_U32(ctx, 31, 0x1C25A0u);
    ctx->pc = 0x1C259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2598u;
    // 0x1c259c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2598u, 0x1C25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25A0u;
label_1c25a0:
    // 0x1c25a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25a4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25A4u;
    SET_GPR_U32(ctx, 31, 0x1C25ACu);
    ctx->pc = 0x1C25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25A4u;
    // 0x1c25a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25A4u, 0x1C25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25ACu;
label_1c25ac:
    // 0x1c25ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25b0: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C25B0u;
    SET_GPR_U32(ctx, 31, 0x1C25B8u);
    ctx->pc = 0x1C25B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25B0u;
    // 0x1c25b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C25B0u, 0x1C25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25B8u;
label_1c25b8:
    // 0x1c25b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C25B8u;
    {
        const bool branch_taken_0x1c25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25b8) {
            ctx->pc = 0x1C2608u;
            goto label_1c2608;
        }
    }
    ctx->pc = 0x1C25C0u;
label_1c25c0:
    // 0x1c25c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c25c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c25c4:
    // 0x1c25c4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25C4u;
    SET_GPR_U32(ctx, 31, 0x1C25CCu);
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25C4u, 0x1C25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25CCu;
label_1c25cc:
    // 0x1c25cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25d0: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C25D0u;
    SET_GPR_U32(ctx, 31, 0x1C25D8u);
    ctx->pc = 0x1C25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25D0u;
    // 0x1c25d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C25D0u, 0x1C25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25D8u;
label_1c25d8:
    // 0x1c25d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25dc: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25DCu;
    SET_GPR_U32(ctx, 31, 0x1C25E4u);
    ctx->pc = 0x1C25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25DCu;
    // 0x1c25e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25DCu, 0x1C25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25E4u;
label_1c25e4:
    // 0x1c25e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25e8: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C25E8u;
    SET_GPR_U32(ctx, 31, 0x1C25F0u);
    ctx->pc = 0x1C25ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25E8u;
    // 0x1c25ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C25E8u, 0x1C25F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25F0u;
label_1c25f0:
    // 0x1c25f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c25f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25f4: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C25F4u;
    SET_GPR_U32(ctx, 31, 0x1C25FCu);
    ctx->pc = 0x1C25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25F4u;
    // 0x1c25f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C25F4u, 0x1C25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25FCu;
label_1c25fc:
    // 0x1c25fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c25fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2600: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C2600u;
    SET_GPR_U32(ctx, 31, 0x1C2608u);
    ctx->pc = 0x1C2604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2600u;
    // 0x1c2604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C2600u, 0x1C2608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2608u;
label_1c2608:
    // 0x1c2608: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_1c260c:
    // 0x1c260c: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C260Cu;
    SET_GPR_U32(ctx, 31, 0x1C2614u);
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C260Cu, 0x1C2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2614u;
label_1c2614:
    // 0x1c2614: 0x14400194  bnez        $v0, . + 4 + (0x194 << 2)
    ctx->pc = 0x1C2614u;
    {
        const bool branch_taken_0x1c2614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2614u;
        // 0x1c2618: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2614) {
            ctx->pc = 0x1C2C68u;
            goto label_1c2c68;
        }
    }
    ctx->pc = 0x1C261Cu;
    // 0x1c261c: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1c2620: 0x2c410027  sltiu       $at, $v0, 0x27
    ctx->pc = 0x1c2620u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x1c2624: 0x10200193  beqz        $at, . + 4 + (0x193 << 2)
    ctx->pc = 0x1C2624u;
    {
        const bool branch_taken_0x1c2624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2624u;
        // 0x1c2628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2624) {
            ctx->pc = 0x1C2C74u;
            goto label_1c2c74;
        }
    }
    ctx->pc = 0x1C262Cu;
    // 0x1c262c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c262cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c2630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2634: 0x24631ab0  addiu       $v1, $v1, 0x1AB0
    ctx->pc = 0x1c2634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6832));
    // 0x1c2638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c263c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2640: 0x400008  jr          $v0
    ctx->pc = 0x1C2640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2648u: goto label_1c2648;
            case 0x1C2668u: goto label_1c2668;
            case 0x1C2700u: goto label_1c2700;
            case 0x1C2738u: goto label_1c2738;
            case 0x1C2754u: goto label_1c2754;
            case 0x1C2784u: goto label_1c2784;
            case 0x1C27C0u: goto label_1c27c0;
            case 0x1C27DCu: goto label_1c27dc;
            case 0x1C2800u: goto label_1c2800;
            case 0x1C281Cu: goto label_1c281c;
            case 0x1C2840u: goto label_1c2840;
            case 0x1C285Cu: goto label_1c285c;
            case 0x1C2880u: goto label_1c2880;
            case 0x1C289Cu: goto label_1c289c;
            case 0x1C28E4u: goto label_1c28e4;
            case 0x1C2900u: goto label_1c2900;
            case 0x1C2948u: goto label_1c2948;
            case 0x1C2964u: goto label_1c2964;
            case 0x1C29ACu: goto label_1c29ac;
            case 0x1C29C0u: goto label_1c29c0;
            case 0x1C29FCu: goto label_1c29fc;
            case 0x1C2A18u: goto label_1c2a18;
            case 0x1C2A5Cu: goto label_1c2a5c;
            case 0x1C2A78u: goto label_1c2a78;
            case 0x1C2ABCu: goto label_1c2abc;
            case 0x1C2AD8u: goto label_1c2ad8;
            case 0x1C2B1Cu: goto label_1c2b1c;
            case 0x1C2B80u: goto label_1c2b80;
            case 0x1C2BB8u: goto label_1c2bb8;
            case 0x1C2C28u: goto label_1c2c28;
            case 0x1C2C48u: goto label_1c2c48;
            case 0x1C2C70u: goto label_1c2c70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C2648u;
label_1c2648:
    // 0x1c2648: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c264c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2650: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C2650u;
    SET_GPR_U32(ctx, 31, 0x1C2658u);
    ctx->pc = 0x1C2654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2650u;
    // 0x1c2654: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C2650u, 0x1C2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2658u;
label_1c2658:
    // 0x1c2658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c265c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1c265cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1c2660: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x1C2660u;
    {
        const bool branch_taken_0x1c2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2660u;
        // 0x1c2664: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2660) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2668u;
label_1c2668:
    // 0x1c2668: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x1c2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1c266c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2670: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2670u;
    {
        const bool branch_taken_0x1c2670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2670u;
        // 0x1c2674: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2670) {
            ctx->pc = 0x1C2680u;
            goto label_1c2680;
        }
    }
    ctx->pc = 0x1C2678u;
    // 0x1c2678: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x1C2678u;
    {
        const bool branch_taken_0x1c2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2678u;
        // 0x1c267c: 0xae250248  sw          $a1, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2678) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2680u;
label_1c2680:
    // 0x1c2680: 0x1444017b  bne         $v0, $a0, . + 4 + (0x17B << 2)
    ctx->pc = 0x1C2680u;
    {
        const bool branch_taken_0x1c2680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c2680) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2688u;
    // 0x1c2688: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1c2688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1c268c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2690: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2690u;
    {
        const bool branch_taken_0x1c2690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2690) {
            ctx->pc = 0x1C26A0u;
            goto label_1c26a0;
        }
    }
    ctx->pc = 0x1C2698u;
    // 0x1c2698: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x1C2698u;
    {
        const bool branch_taken_0x1c2698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2698u;
        // 0x1c269c: 0xae240248  sw          $a0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2698) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C26A0u;
label_1c26a0:
    // 0x1c26a0: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x1c26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1c26a4: 0x2861fff6  slti        $at, $v1, -0xA
    ctx->pc = 0x1c26a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x1c26a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C26A8u;
    {
        const bool branch_taken_0x1c26a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26A8u;
        // 0x1c26ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26a8) {
            ctx->pc = 0x1C26B8u;
            goto label_1c26b8;
        }
    }
    ctx->pc = 0x1C26B0u;
    // 0x1c26b0: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x1C26B0u;
    {
        const bool branch_taken_0x1c26b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26B0u;
        // 0x1c26b4: 0xae240248  sw          $a0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26b0) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C26B8u;
label_1c26b8:
    // 0x1c26b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C26B8u;
    {
        const bool branch_taken_0x1c26b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c26b8) {
            ctx->pc = 0x1C26CCu;
            goto label_1c26cc;
        }
    }
    ctx->pc = 0x1C26C0u;
    // 0x1c26c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c26c4: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x1C26C4u;
    {
        const bool branch_taken_0x1c26c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26C4u;
        // 0x1c26c8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26c4) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C26CCu;
label_1c26cc:
    // 0x1c26cc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1c26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1c26d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C26D0u;
    {
        const bool branch_taken_0x1c26d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26D0u;
        // 0x1c26d4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26d0) {
            ctx->pc = 0x1C26E4u;
            goto label_1c26e4;
        }
    }
    ctx->pc = 0x1C26D8u;
    // 0x1c26d8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c26dc: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1C26DCu;
    {
        const bool branch_taken_0x1c26dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26DCu;
        // 0x1c26e0: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26dc) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C26E4u;
label_1c26e4:
    // 0x1c26e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C26E4u;
    {
        const bool branch_taken_0x1c26e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c26e4) {
            ctx->pc = 0x1C26F4u;
            goto label_1c26f4;
        }
    }
    ctx->pc = 0x1C26ECu;
    // 0x1c26ec: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x1C26ECu;
    {
        const bool branch_taken_0x1c26ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26ECu;
        // 0x1c26f0: 0xae250248  sw          $a1, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26ec) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C26F4u;
label_1c26f4:
    // 0x1c26f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c26f8: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x1C26F8u;
    {
        const bool branch_taken_0x1c26f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26F8u;
        // 0x1c26fc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26f8) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2700u;
label_1c2700:
    // 0x1c2700: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1c2704: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2708: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2708u;
    {
        const bool branch_taken_0x1c2708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2708u;
        // 0x1c270c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2708) {
            ctx->pc = 0x1C2718u;
            goto label_1c2718;
        }
    }
    ctx->pc = 0x1C2710u;
    // 0x1c2710: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x1C2710u;
    {
        const bool branch_taken_0x1c2710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2710u;
        // 0x1c2714: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2710) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2718u;
label_1c2718:
    // 0x1c2718: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1c2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1c271c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C271Cu;
    {
        const bool branch_taken_0x1c271c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C271Cu;
        // 0x1c2720: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c271c) {
            ctx->pc = 0x1C2730u;
            goto label_1c2730;
        }
    }
    ctx->pc = 0x1C2724u;
    // 0x1c2724: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c2728: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1C2728u;
    {
        const bool branch_taken_0x1c2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2728u;
        // 0x1c272c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2728) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2730u;
label_1c2730:
    // 0x1c2730: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x1C2730u;
    {
        const bool branch_taken_0x1c2730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2730u;
        // 0x1c2734: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2730) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2738u;
label_1c2738:
    // 0x1c2738: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c273c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2740: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C2740u;
    SET_GPR_U32(ctx, 31, 0x1C2748u);
    ctx->pc = 0x1C2744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2740u;
    // 0x1c2744: 0x24a51a38  addiu       $a1, $a1, 0x1A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C2740u, 0x1C2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2748u;
label_1c2748:
    // 0x1c2748: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c2748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c274c: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x1C274Cu;
    {
        const bool branch_taken_0x1c274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C274Cu;
        // 0x1c2750: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c274c) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2754u;
label_1c2754:
    // 0x1c2754: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1c2758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c275c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C275Cu;
    {
        const bool branch_taken_0x1c275c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C275Cu;
        // 0x1c2760: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c275c) {
            ctx->pc = 0x1C2770u;
            goto label_1c2770;
        }
    }
    ctx->pc = 0x1C2764u;
    // 0x1c2764: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1c2764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c2768: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x1C2768u;
    {
        const bool branch_taken_0x1c2768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2768u;
        // 0x1c276c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2768) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2770u;
label_1c2770:
    // 0x1c2770: 0x1462013f  bne         $v1, $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x1C2770u;
    {
        const bool branch_taken_0x1c2770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2770) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2778u;
    // 0x1c2778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c277c: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x1C277Cu;
    {
        const bool branch_taken_0x1c277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C277Cu;
        // 0x1c2780: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c277c) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2784u;
label_1c2784:
    // 0x1c2784: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c2784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c2788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c278c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C278Cu;
    {
        const bool branch_taken_0x1c278c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C278Cu;
        // 0x1c2790: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c278c) {
            ctx->pc = 0x1C279Cu;
            goto label_1c279c;
        }
    }
    ctx->pc = 0x1C2794u;
    // 0x1c2794: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1C2794u;
    {
        const bool branch_taken_0x1c2794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2794u;
        // 0x1c2798: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2794) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C279Cu;
label_1c279c:
    // 0x1c279c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x1c279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1c27a0: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c27a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c27a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C27A4u;
    {
        const bool branch_taken_0x1c27a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27A4u;
        // 0x1c27a8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27a4) {
            ctx->pc = 0x1C27B8u;
            goto label_1c27b8;
        }
    }
    ctx->pc = 0x1C27ACu;
    // 0x1c27ac: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c27acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c27b0: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x1C27B0u;
    {
        const bool branch_taken_0x1c27b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B0u;
        // 0x1c27b4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27b0) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C27B8u;
label_1c27b8:
    // 0x1c27b8: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1C27B8u;
    {
        const bool branch_taken_0x1c27b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B8u;
        // 0x1c27bc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27b8) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C27C0u;
label_1c27c0:
    // 0x1c27c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c27c4: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c27c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c27c8: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C27C8u;
    SET_GPR_U32(ctx, 31, 0x1C27D0u);
    ctx->pc = 0x1C27CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27C8u;
    // 0x1c27cc: 0x24a51a50  addiu       $a1, $a1, 0x1A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C27C8u, 0x1C27D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27D0u;
label_1c27d0:
    // 0x1c27d0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c27d4: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1C27D4u;
    {
        const bool branch_taken_0x1c27d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27D4u;
        // 0x1c27d8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27d4) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C27DCu;
label_1c27dc:
    // 0x1c27dc: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c27dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c27e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C27E4u;
    {
        const bool branch_taken_0x1c27e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27E4u;
        // 0x1c27e8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27e4) {
            ctx->pc = 0x1C27F8u;
            goto label_1c27f8;
        }
    }
    ctx->pc = 0x1C27ECu;
    // 0x1c27ec: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1c27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c27f0: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1C27F0u;
    {
        const bool branch_taken_0x1c27f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27F0u;
        // 0x1c27f4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27f0) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C27F8u;
label_1c27f8:
    // 0x1c27f8: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1C27F8u;
    {
        const bool branch_taken_0x1c27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27F8u;
        // 0x1c27fc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27f8) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2800u;
label_1c2800:
    // 0x1c2800: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2804: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2808: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C2808u;
    SET_GPR_U32(ctx, 31, 0x1C2810u);
    ctx->pc = 0x1C280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2808u;
    // 0x1c280c: 0x24a51a70  addiu       $a1, $a1, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C2808u, 0x1C2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2810u;
label_1c2810:
    // 0x1c2810: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c2810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c2814: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x1C2814u;
    {
        const bool branch_taken_0x1c2814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2814u;
        // 0x1c2818: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2814) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C281Cu;
label_1c281c:
    // 0x1c281c: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c2820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2824: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2824u;
    {
        const bool branch_taken_0x1c2824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2824u;
        // 0x1c2828: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2824) {
            ctx->pc = 0x1C2838u;
            goto label_1c2838;
        }
    }
    ctx->pc = 0x1C282Cu;
    // 0x1c282c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c2830: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x1C2830u;
    {
        const bool branch_taken_0x1c2830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2830u;
        // 0x1c2834: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2830) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2838u;
label_1c2838:
    // 0x1c2838: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x1C2838u;
    {
        const bool branch_taken_0x1c2838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2838u;
        // 0x1c283c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2838) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2840u;
label_1c2840:
    // 0x1c2840: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2844: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2848: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C2848u;
    SET_GPR_U32(ctx, 31, 0x1C2850u);
    ctx->pc = 0x1C284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2848u;
    // 0x1c284c: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C2848u, 0x1C2850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2850u;
label_1c2850:
    // 0x1c2850: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c2854: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x1C2854u;
    {
        const bool branch_taken_0x1c2854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2854u;
        // 0x1c2858: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2854) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C285Cu;
label_1c285c:
    // 0x1c285c: 0x8e2301e8  lw          $v1, 0x1E8($s1)
    ctx->pc = 0x1c285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1c2860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2864: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2864u;
    {
        const bool branch_taken_0x1c2864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2864u;
        // 0x1c2868: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2864) {
            ctx->pc = 0x1C2878u;
            goto label_1c2878;
        }
    }
    ctx->pc = 0x1C286Cu;
    // 0x1c286c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c2870: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x1C2870u;
    {
        const bool branch_taken_0x1c2870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2870u;
        // 0x1c2874: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2870) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2878u;
label_1c2878:
    // 0x1c2878: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1C2878u;
    {
        const bool branch_taken_0x1c2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2878u;
        // 0x1c287c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2878) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2880u;
label_1c2880:
    // 0x1c2880: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2884: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2888: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2888u;
    SET_GPR_U32(ctx, 31, 0x1C2890u);
    ctx->pc = 0x1C288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2888u;
    // 0x1c288c: 0x24a51a50  addiu       $a1, $a1, 0x1A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2888u, 0x1C2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2890u;
label_1c2890:
    // 0x1c2890: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1c2890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c2894: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1C2894u;
    {
        const bool branch_taken_0x1c2894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2894u;
        // 0x1c2898: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2894) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C289Cu;
label_1c289c:
    // 0x1c289c: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c28a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c28a4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C28A4u;
    {
        const bool branch_taken_0x1c28a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c28a4) {
            ctx->pc = 0x1C28CCu;
            goto label_1c28cc;
        }
    }
    ctx->pc = 0x1C28ACu;
    // 0x1c28ac: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c28acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c28b0: 0x24022780  addiu       $v0, $zero, 0x2780
    ctx->pc = 0x1c28b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    // 0x1c28b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C28B4u;
    {
        const bool branch_taken_0x1c28b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28B4u;
        // 0x1c28b8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28b4) {
            ctx->pc = 0x1C28C8u;
            goto label_1c28c8;
        }
    }
    ctx->pc = 0x1C28BCu;
    // 0x1c28bc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c28c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C28C0u;
    {
        const bool branch_taken_0x1c28c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28C0u;
        // 0x1c28c4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28c0) {
            ctx->pc = 0x1C28CCu;
            goto label_1c28cc;
        }
    }
    ctx->pc = 0x1C28C8u;
label_1c28c8:
    // 0x1c28c8: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
label_1c28cc:
    // 0x1c28cc: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c28d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c28d4: 0x146200e6  bne         $v1, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1C28D4u;
    {
        const bool branch_taken_0x1c28d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28D4u;
        // 0x1c28d8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28d4) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C28DCu;
    // 0x1c28dc: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1C28DCu;
    {
        const bool branch_taken_0x1c28dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28DCu;
        // 0x1c28e0: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28dc) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C28E4u;
label_1c28e4:
    // 0x1c28e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c28e8: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c28ec: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C28ECu;
    SET_GPR_U32(ctx, 31, 0x1C28F4u);
    ctx->pc = 0x1C28F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28ECu;
    // 0x1c28f0: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C28ECu, 0x1C28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28F4u;
label_1c28f4:
    // 0x1c28f4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c28f8: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x1C28F8u;
    {
        const bool branch_taken_0x1c28f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28F8u;
        // 0x1c28fc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28f8) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2900u;
label_1c2900:
    // 0x1c2900: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2904: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2908: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2908u;
    {
        const bool branch_taken_0x1c2908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2908) {
            ctx->pc = 0x1C2930u;
            goto label_1c2930;
        }
    }
    ctx->pc = 0x1C2910u;
    // 0x1c2910: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2914: 0x240235e0  addiu       $v0, $zero, 0x35E0
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    // 0x1c2918: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2918u;
    {
        const bool branch_taken_0x1c2918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2918u;
        // 0x1c291c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2918) {
            ctx->pc = 0x1C292Cu;
            goto label_1c292c;
        }
    }
    ctx->pc = 0x1C2920u;
    // 0x1c2920: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1c2920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c2924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2924u;
    {
        const bool branch_taken_0x1c2924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2924u;
        // 0x1c2928: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2924) {
            ctx->pc = 0x1C2930u;
            goto label_1c2930;
        }
    }
    ctx->pc = 0x1C292Cu;
label_1c292c:
    // 0x1c292c: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c292cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
label_1c2930:
    // 0x1c2930: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2934: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2938: 0x146200cd  bne         $v1, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1C2938u;
    {
        const bool branch_taken_0x1c2938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2938u;
        // 0x1c293c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2938) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2940u;
    // 0x1c2940: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1C2940u;
    {
        const bool branch_taken_0x1c2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2940u;
        // 0x1c2944: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2940) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2948u;
label_1c2948:
    // 0x1c2948: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c294c: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2950: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2950u;
    SET_GPR_U32(ctx, 31, 0x1C2958u);
    ctx->pc = 0x1C2954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2950u;
    // 0x1c2954: 0x24a51a70  addiu       $a1, $a1, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2950u, 0x1C2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2958u;
label_1c2958:
    // 0x1c2958: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1c2958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c295c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1C295Cu;
    {
        const bool branch_taken_0x1c295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C295Cu;
        // 0x1c2960: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c295c) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2964u;
label_1c2964:
    // 0x1c2964: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c296c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C296Cu;
    {
        const bool branch_taken_0x1c296c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c296c) {
            ctx->pc = 0x1C2994u;
            goto label_1c2994;
        }
    }
    ctx->pc = 0x1C2974u;
    // 0x1c2974: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2978: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x1c2978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1c297c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C297Cu;
    {
        const bool branch_taken_0x1c297c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C297Cu;
        // 0x1c2980: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c297c) {
            ctx->pc = 0x1C2990u;
            goto label_1c2990;
        }
    }
    ctx->pc = 0x1C2984u;
    // 0x1c2984: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c2988: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2988u;
    {
        const bool branch_taken_0x1c2988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2988u;
        // 0x1c298c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2988) {
            ctx->pc = 0x1C2994u;
            goto label_1c2994;
        }
    }
    ctx->pc = 0x1C2990u;
label_1c2990:
    // 0x1c2990: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c2990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
label_1c2994:
    // 0x1c2994: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2998: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c299c: 0x146200b4  bne         $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C299Cu;
    {
        const bool branch_taken_0x1c299c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C299Cu;
        // 0x1c29a0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c299c) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C29A4u;
    // 0x1c29a4: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1C29A4u;
    {
        const bool branch_taken_0x1c29a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29A4u;
        // 0x1c29a8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29a4) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C29ACu;
label_1c29ac:
    // 0x1c29ac: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C29ACu;
    SET_GPR_U32(ctx, 31, 0x1C29B4u);
    ctx->pc = 0x1C29B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29ACu;
    // 0x1c29b0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C29ACu, 0x1C29B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29B4u;
label_1c29b4:
    // 0x1c29b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c29b8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1C29B8u;
    {
        const bool branch_taken_0x1c29b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29B8u;
        // 0x1c29bc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29b8) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C29C0u;
label_1c29c0:
    // 0x1c29c0: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C29C0u;
    SET_GPR_U32(ctx, 31, 0x1C29C8u);
    ctx->pc = 0x1C29C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29C0u;
    // 0x1c29c4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C29C0u, 0x1C29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C29C8u;
label_1c29c8:
    // 0x1c29c8: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1C29C8u;
    {
        const bool branch_taken_0x1c29c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c29c8) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C29D0u;
    // 0x1c29d0: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x1c29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1c29d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c29d8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C29D8u;
    {
        const bool branch_taken_0x1c29d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D8u;
        // 0x1c29dc: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29d8) {
            ctx->pc = 0x1C29ECu;
            goto label_1c29ec;
        }
    }
    ctx->pc = 0x1C29E0u;
    // 0x1c29e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c29e4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1C29E4u;
    {
        const bool branch_taken_0x1c29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29E4u;
        // 0x1c29e8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29e4) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C29ECu;
label_1c29ec:
    // 0x1c29ec: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c29f0: 0xac20f5d8  sw          $zero, -0xA28($at)
    ctx->pc = 0x1c29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964696), GPR_U32(ctx, 0));
    // 0x1c29f4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x1C29F4u;
    {
        const bool branch_taken_0x1c29f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29F4u;
        // 0x1c29f8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29f4) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C29FCu;
label_1c29fc:
    // 0x1c29fc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2a00: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2a04: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2A04u;
    SET_GPR_U32(ctx, 31, 0x1C2A0Cu);
    ctx->pc = 0x1C2A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A04u;
    // 0x1c2a08: 0x24a51a38  addiu       $a1, $a1, 0x1A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2A04u, 0x1C2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A0Cu;
label_1c2a0c:
    // 0x1c2a0c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c2a10: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1C2A10u;
    {
        const bool branch_taken_0x1c2a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A10u;
        // 0x1c2a14: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a10) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2A18u;
label_1c2a18:
    // 0x1c2a18: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2a1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2a20: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2A20u;
    {
        const bool branch_taken_0x1c2a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A20u;
        // 0x1c2a24: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a20) {
            ctx->pc = 0x1C2A44u;
            goto label_1c2a44;
        }
    }
    ctx->pc = 0x1C2A28u;
    // 0x1c2a28: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2a2c: 0x8c24f5d8  lw          $a0, -0xA28($at)
    ctx->pc = 0x1c2a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964696)));
    // 0x1c2a30: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c2a34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c2a38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2a3c: 0xac23f5d8  sw          $v1, -0xA28($at)
    ctx->pc = 0x1c2a3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D8u, _value); } while (0);
    // 0x1c2a40: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c2a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
label_1c2a44:
    // 0x1c2a44: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2a48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2a4c: 0x14620088  bne         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1C2A4Cu;
    {
        const bool branch_taken_0x1c2a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A4Cu;
        // 0x1c2a50: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a4c) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2A54u;
    // 0x1c2a54: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1C2A54u;
    {
        const bool branch_taken_0x1c2a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A54u;
        // 0x1c2a58: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a54) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2A5Cu;
label_1c2a5c:
    // 0x1c2a5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2a60: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2a64: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2A64u;
    SET_GPR_U32(ctx, 31, 0x1C2A6Cu);
    ctx->pc = 0x1C2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A64u;
    // 0x1c2a68: 0x24a51a90  addiu       $a1, $a1, 0x1A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2A64u, 0x1C2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A6Cu;
label_1c2a6c:
    // 0x1c2a6c: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1c2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1c2a70: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1C2A70u;
    {
        const bool branch_taken_0x1c2a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A70u;
        // 0x1c2a74: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a70) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2A78u;
label_1c2a78:
    // 0x1c2a78: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2a7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2a80: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2A80u;
    {
        const bool branch_taken_0x1c2a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A80u;
        // 0x1c2a84: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a80) {
            ctx->pc = 0x1C2AA4u;
            goto label_1c2aa4;
        }
    }
    ctx->pc = 0x1C2A88u;
    // 0x1c2a88: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2a8c: 0x8c24f5d8  lw          $a0, -0xA28($at)
    ctx->pc = 0x1c2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964696)));
    // 0x1c2a90: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c2a94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c2a98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2a9c: 0xac23f5d8  sw          $v1, -0xA28($at)
    ctx->pc = 0x1c2a9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D8u, _value); } while (0);
    // 0x1c2aa0: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
label_1c2aa4:
    // 0x1c2aa4: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2aa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2aac: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1C2AACu;
    {
        const bool branch_taken_0x1c2aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AACu;
        // 0x1c2ab0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2aac) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2AB4u;
    // 0x1c2ab4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1C2AB4u;
    {
        const bool branch_taken_0x1c2ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AB4u;
        // 0x1c2ab8: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ab4) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2ABCu;
label_1c2abc:
    // 0x1c2abc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2ac0: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2ac4: 0xc07471c  jal         func_1D1C70
    ctx->pc = 0x1C2AC4u;
    SET_GPR_U32(ctx, 31, 0x1C2ACCu);
    ctx->pc = 0x1C2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AC4u;
    // 0x1c2ac8: 0x24a51a70  addiu       $a1, $a1, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C70u, 0x1C2AC4u, 0x1C2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ACCu;
label_1c2acc:
    // 0x1c2acc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1c2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c2ad0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C2AD0u;
    {
        const bool branch_taken_0x1c2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AD0u;
        // 0x1c2ad4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ad0) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2AD8u;
label_1c2ad8:
    // 0x1c2ad8: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2ae0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2AE0u;
    {
        const bool branch_taken_0x1c2ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AE0u;
        // 0x1c2ae4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ae0) {
            ctx->pc = 0x1C2B04u;
            goto label_1c2b04;
        }
    }
    ctx->pc = 0x1C2AE8u;
    // 0x1c2ae8: 0x8e230238  lw          $v1, 0x238($s1)
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x1c2aec: 0x8c24f5d8  lw          $a0, -0xA28($at)
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964696)));
    // 0x1c2af0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c2af4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c2af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2afc: 0xac23f5d8  sw          $v1, -0xA28($at)
    ctx->pc = 0x1c2afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D8u, _value); } while (0);
    // 0x1c2b00: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
label_1c2b04:
    // 0x1c2b04: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x1c2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1c2b08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2b0c: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C2B0Cu;
    {
        const bool branch_taken_0x1c2b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B0Cu;
        // 0x1c2b10: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b0c) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2B14u;
    // 0x1c2b14: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1C2B14u;
    {
        const bool branch_taken_0x1c2b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B14u;
        // 0x1c2b18: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b14) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2B1Cu;
label_1c2b1c:
    // 0x1c2b1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2b20: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x1c2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1c2b24: 0x8c22f5d8  lw          $v0, -0xA28($at)
    ctx->pc = 0x1c2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5D8u));
    // 0x1c2b28: 0x24036d24  addiu       $v1, $zero, 0x6D24
    ctx->pc = 0x1c2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27940));
    // 0x1c2b2c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2b30: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x1c2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1c2b34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2B34u;
    {
        const bool branch_taken_0x1c2b34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B34u;
        // 0x1c2b38: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b34) {
            ctx->pc = 0x1C2B44u;
            goto label_1c2b44;
        }
    }
    ctx->pc = 0x1C2B3Cu;
    // 0x1c2b3c: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x1c2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c2b40: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_1c2b44:
    // 0x1c2b44: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x1c2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1c2b48: 0x212bc  dsll32      $v0, $v0, 10
    ctx->pc = 0x1c2b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 10));
    // 0x1c2b4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2B4Cu;
    {
        const bool branch_taken_0x1c2b4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B4Cu;
        // 0x1c2b50: 0x212bf  dsra32      $v0, $v0, 10 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b4c) {
            ctx->pc = 0x1C2B5Cu;
            goto label_1c2b5c;
        }
    }
    ctx->pc = 0x1C2B54u;
    // 0x1c2b54: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x1c2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c2b58: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1c2b58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_1c2b5c:
    // 0x1c2b5c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1c2b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c2b60: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B60u;
    {
        const bool branch_taken_0x1c2b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b60) {
            ctx->pc = 0x1C2B74u;
            goto label_1c2b74;
        }
    }
    ctx->pc = 0x1C2B68u;
    // 0x1c2b68: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c2b6c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C2B6Cu;
    {
        const bool branch_taken_0x1c2b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B6Cu;
        // 0x1c2b70: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b6c) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2B74u;
label_1c2b74:
    // 0x1c2b74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c2b78: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C2B78u;
    {
        const bool branch_taken_0x1c2b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B78u;
        // 0x1c2b7c: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b78) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2B80u;
label_1c2b80:
    // 0x1c2b80: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1C2B80u;
    SET_GPR_U32(ctx, 31, 0x1C2B88u);
    ctx->pc = 0x1C2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B80u;
    // 0x1c2b84: 0x24042780  addiu       $a0, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1C2B80u, 0x1C2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B88u;
label_1c2b88:
    // 0x1c2b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2b8c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2b90: 0xac22f5d0  sw          $v0, -0xA30($at)
    ctx->pc = 0x1c2b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D0u, _value); } while (0);
    // 0x1c2b94: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1c2b98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2b9c: 0x24a51a50  addiu       $a1, $a1, 0x1A50
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    // 0x1c2ba0: 0x8c26f5d0  lw          $a2, -0xA30($at)
    ctx->pc = 0x1c2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F5D0u));
    // 0x1c2ba4: 0xc074a3c  jal         func_1D28F0
    ctx->pc = 0x1C2BA4u;
    SET_GPR_U32(ctx, 31, 0x1C2BACu);
    ctx->pc = 0x1C2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BA4u;
    // 0x1c2ba8: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D28F0u, 0x1C2BA4u, 0x1C2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BACu;
label_1c2bac:
    // 0x1c2bac: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1c2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c2bb0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C2BB0u;
    {
        const bool branch_taken_0x1c2bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BB0u;
        // 0x1c2bb4: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bb0) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2BB8u;
label_1c2bb8:
    // 0x1c2bb8: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x1c2bbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2bc0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2BC0u;
    {
        const bool branch_taken_0x1c2bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BC0u;
        // 0x1c2bc4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bc0) {
            ctx->pc = 0x1C2C0Cu;
            goto label_1c2c0c;
        }
    }
    ctx->pc = 0x1C2BC8u;
    // 0x1c2bc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2bcc: 0xc0731a0  jal         func_1CC680
    ctx->pc = 0x1C2BCCu;
    SET_GPR_U32(ctx, 31, 0x1C2BD4u);
    ctx->pc = 0x1C2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BCCu;
    // 0x1c2bd0: 0x8c24f5d0  lw          $a0, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC680u, 0x1C2BCCu, 0x1C2BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BD4u;
label_1c2bd4:
    // 0x1c2bd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2BD4u;
    {
        const bool branch_taken_0x1c2bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BD4u;
        // 0x1c2bd8: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bd4) {
            ctx->pc = 0x1C2C00u;
            goto label_1c2c00;
        }
    }
    ctx->pc = 0x1C2BDCu;
    // 0x1c2bdc: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c2be0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2be4: 0xc06d024  jal         func_1B4090
    ctx->pc = 0x1C2BE4u;
    SET_GPR_U32(ctx, 31, 0x1C2BECu);
    ctx->pc = 0x1C2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BE4u;
    // 0x1c2be8: 0x8c25f5d0  lw          $a1, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4090u, 0x1C2BE4u, 0x1C2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BECu;
label_1c2bec:
    // 0x1c2bec: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1c2becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c2bf0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c2bf4: 0xae230248  sw          $v1, 0x248($s1)
    ctx->pc = 0x1c2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 3));
    // 0x1c2bf8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C2BF8u;
    {
        const bool branch_taken_0x1c2bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BF8u;
        // 0x1c2bfc: 0xae22024c  sw          $v0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bf8) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2C00u;
label_1c2c00:
    // 0x1c2c00: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c2c04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C2C04u;
    {
        const bool branch_taken_0x1c2c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C04u;
        // 0x1c2c08: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c04) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2C0Cu;
label_1c2c0c:
    // 0x1c2c0c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C14u);
    ctx->pc = 0x1C2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C0Cu;
    // 0x1c2c10: 0x8c24f5d0  lw          $a0, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C2C0Cu, 0x1C2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C14u;
label_1c2c14:
    // 0x1c2c14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2c18: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c2c1c: 0xac20f5d0  sw          $zero, -0xA30($at)
    ctx->pc = 0x1c2c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D0u, _value); } while (0);
    // 0x1c2c20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2C20u;
    {
        const bool branch_taken_0x1c2c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C20u;
        // 0x1c2c24: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c20) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2C28u;
label_1c2c28:
    // 0x1c2c28: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1c2c2c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2C2Cu;
    {
        const bool branch_taken_0x1c2c2c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C2Cu;
        // 0x1c2c30: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c2c) {
            ctx->pc = 0x1C2C38u;
            goto label_1c2c38;
        }
    }
    ctx->pc = 0x1C2C34u;
    // 0x1c2c34: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
label_1c2c38:
    // 0x1c2c38: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x1c2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1c2c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c2c40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2C40u;
    {
        const bool branch_taken_0x1c2c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C40u;
        // 0x1c2c44: 0xae22024c  sw          $v0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c40) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2C48u;
label_1c2c48:
    // 0x1c2c48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2c4c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C54u);
    ctx->pc = 0x1C2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C4Cu;
    // 0x1c2c50: 0x8c24f5d0  lw          $a0, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C2C4Cu, 0x1C2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C54u;
label_1c2c54:
    // 0x1c2c54: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1c2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c2c58: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1C2C58u;
    SET_GPR_U32(ctx, 31, 0x1C2C60u);
    ctx->pc = 0x1C2C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C58u;
    // 0x1c2c5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1C2C58u, 0x1C2C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C60u;
label_1c2c60:
    // 0x1c2c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2C60u;
    {
        const bool branch_taken_0x1c2c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c60) {
            ctx->pc = 0x1C2C70u;
            goto label_1c2c70;
        }
    }
    ctx->pc = 0x1C2C68u;
label_1c2c68:
    // 0x1c2c68: 0xc07460c  jal         func_1D1830
    ctx->pc = 0x1C2C68u;
    SET_GPR_U32(ctx, 31, 0x1C2C70u);
    ctx->pc = 0x1D1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1830u, 0x1C2C68u, 0x1C2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C70u;
label_1c2c70:
    // 0x1c2c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c74:
    // 0x1c2c74: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C2C74u;
    SET_GPR_U32(ctx, 31, 0x1C2C7Cu);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C2C74u, 0x1C2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C7Cu;
label_1c2c7c:
    // 0x1c2c7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C88u;
        // 0x1c2c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2C90u;
}
