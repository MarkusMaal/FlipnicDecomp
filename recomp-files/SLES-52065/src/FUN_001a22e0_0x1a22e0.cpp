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

// Function: FUN_001a22e0
// Address: 0x1a22e0 - 0x1a2530
void FUN_001a22e0_0x1a22e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a22e0_0x1a22e0");
#endif

    switch (ctx->pc) {
        case 0x1a22e0u: goto label_1a22e0;
        case 0x1a22e4u: goto label_1a22e4;
        case 0x1a22e8u: goto label_1a22e8;
        case 0x1a22ecu: goto label_1a22ec;
        case 0x1a22f0u: goto label_1a22f0;
        case 0x1a22f4u: goto label_1a22f4;
        case 0x1a22f8u: goto label_1a22f8;
        case 0x1a22fcu: goto label_1a22fc;
        case 0x1a2300u: goto label_1a2300;
        case 0x1a2304u: goto label_1a2304;
        case 0x1a2308u: goto label_1a2308;
        case 0x1a230cu: goto label_1a230c;
        case 0x1a2310u: goto label_1a2310;
        case 0x1a2314u: goto label_1a2314;
        case 0x1a2318u: goto label_1a2318;
        case 0x1a231cu: goto label_1a231c;
        case 0x1a2320u: goto label_1a2320;
        case 0x1a2324u: goto label_1a2324;
        case 0x1a2328u: goto label_1a2328;
        case 0x1a232cu: goto label_1a232c;
        case 0x1a2330u: goto label_1a2330;
        case 0x1a2334u: goto label_1a2334;
        case 0x1a2338u: goto label_1a2338;
        case 0x1a233cu: goto label_1a233c;
        case 0x1a2340u: goto label_1a2340;
        case 0x1a2344u: goto label_1a2344;
        case 0x1a2348u: goto label_1a2348;
        case 0x1a234cu: goto label_1a234c;
        case 0x1a2350u: goto label_1a2350;
        case 0x1a2354u: goto label_1a2354;
        case 0x1a2358u: goto label_1a2358;
        case 0x1a235cu: goto label_1a235c;
        case 0x1a2360u: goto label_1a2360;
        case 0x1a2364u: goto label_1a2364;
        case 0x1a2368u: goto label_1a2368;
        case 0x1a236cu: goto label_1a236c;
        case 0x1a2370u: goto label_1a2370;
        case 0x1a2374u: goto label_1a2374;
        case 0x1a2378u: goto label_1a2378;
        case 0x1a237cu: goto label_1a237c;
        case 0x1a2380u: goto label_1a2380;
        case 0x1a2384u: goto label_1a2384;
        case 0x1a2388u: goto label_1a2388;
        case 0x1a238cu: goto label_1a238c;
        case 0x1a2390u: goto label_1a2390;
        case 0x1a2394u: goto label_1a2394;
        case 0x1a2398u: goto label_1a2398;
        case 0x1a239cu: goto label_1a239c;
        case 0x1a23a0u: goto label_1a23a0;
        case 0x1a23a4u: goto label_1a23a4;
        case 0x1a23a8u: goto label_1a23a8;
        case 0x1a23acu: goto label_1a23ac;
        case 0x1a23b0u: goto label_1a23b0;
        case 0x1a23b4u: goto label_1a23b4;
        case 0x1a23b8u: goto label_1a23b8;
        case 0x1a23bcu: goto label_1a23bc;
        case 0x1a23c0u: goto label_1a23c0;
        case 0x1a23c4u: goto label_1a23c4;
        case 0x1a23c8u: goto label_1a23c8;
        case 0x1a23ccu: goto label_1a23cc;
        case 0x1a23d0u: goto label_1a23d0;
        case 0x1a23d4u: goto label_1a23d4;
        case 0x1a23d8u: goto label_1a23d8;
        case 0x1a23dcu: goto label_1a23dc;
        case 0x1a23e0u: goto label_1a23e0;
        case 0x1a23e4u: goto label_1a23e4;
        case 0x1a23e8u: goto label_1a23e8;
        case 0x1a23ecu: goto label_1a23ec;
        case 0x1a23f0u: goto label_1a23f0;
        case 0x1a23f4u: goto label_1a23f4;
        case 0x1a23f8u: goto label_1a23f8;
        case 0x1a23fcu: goto label_1a23fc;
        case 0x1a2400u: goto label_1a2400;
        case 0x1a2404u: goto label_1a2404;
        case 0x1a2408u: goto label_1a2408;
        case 0x1a240cu: goto label_1a240c;
        case 0x1a2410u: goto label_1a2410;
        case 0x1a2414u: goto label_1a2414;
        case 0x1a2418u: goto label_1a2418;
        case 0x1a241cu: goto label_1a241c;
        case 0x1a2420u: goto label_1a2420;
        case 0x1a2424u: goto label_1a2424;
        case 0x1a2428u: goto label_1a2428;
        case 0x1a242cu: goto label_1a242c;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2434u: goto label_1a2434;
        case 0x1a2438u: goto label_1a2438;
        case 0x1a243cu: goto label_1a243c;
        case 0x1a2440u: goto label_1a2440;
        case 0x1a2444u: goto label_1a2444;
        case 0x1a2448u: goto label_1a2448;
        case 0x1a244cu: goto label_1a244c;
        case 0x1a2450u: goto label_1a2450;
        case 0x1a2454u: goto label_1a2454;
        case 0x1a2458u: goto label_1a2458;
        case 0x1a245cu: goto label_1a245c;
        case 0x1a2460u: goto label_1a2460;
        case 0x1a2464u: goto label_1a2464;
        case 0x1a2468u: goto label_1a2468;
        case 0x1a246cu: goto label_1a246c;
        case 0x1a2470u: goto label_1a2470;
        case 0x1a2474u: goto label_1a2474;
        case 0x1a2478u: goto label_1a2478;
        case 0x1a247cu: goto label_1a247c;
        case 0x1a2480u: goto label_1a2480;
        case 0x1a2484u: goto label_1a2484;
        case 0x1a2488u: goto label_1a2488;
        case 0x1a248cu: goto label_1a248c;
        case 0x1a2490u: goto label_1a2490;
        case 0x1a2494u: goto label_1a2494;
        case 0x1a2498u: goto label_1a2498;
        case 0x1a249cu: goto label_1a249c;
        case 0x1a24a0u: goto label_1a24a0;
        case 0x1a24a4u: goto label_1a24a4;
        case 0x1a24a8u: goto label_1a24a8;
        case 0x1a24acu: goto label_1a24ac;
        case 0x1a24b0u: goto label_1a24b0;
        case 0x1a24b4u: goto label_1a24b4;
        case 0x1a24b8u: goto label_1a24b8;
        case 0x1a24bcu: goto label_1a24bc;
        case 0x1a24c0u: goto label_1a24c0;
        case 0x1a24c4u: goto label_1a24c4;
        case 0x1a24c8u: goto label_1a24c8;
        case 0x1a24ccu: goto label_1a24cc;
        case 0x1a24d0u: goto label_1a24d0;
        case 0x1a24d4u: goto label_1a24d4;
        case 0x1a24d8u: goto label_1a24d8;
        case 0x1a24dcu: goto label_1a24dc;
        case 0x1a24e0u: goto label_1a24e0;
        case 0x1a24e4u: goto label_1a24e4;
        case 0x1a24e8u: goto label_1a24e8;
        case 0x1a24ecu: goto label_1a24ec;
        case 0x1a24f0u: goto label_1a24f0;
        case 0x1a24f4u: goto label_1a24f4;
        case 0x1a24f8u: goto label_1a24f8;
        case 0x1a24fcu: goto label_1a24fc;
        case 0x1a2500u: goto label_1a2500;
        case 0x1a2504u: goto label_1a2504;
        case 0x1a2508u: goto label_1a2508;
        case 0x1a250cu: goto label_1a250c;
        case 0x1a2510u: goto label_1a2510;
        case 0x1a2514u: goto label_1a2514;
        case 0x1a2518u: goto label_1a2518;
        case 0x1a251cu: goto label_1a251c;
        case 0x1a2520u: goto label_1a2520;
        case 0x1a2524u: goto label_1a2524;
        case 0x1a2528u: goto label_1a2528;
        case 0x1a252cu: goto label_1a252c;
        default: break;
    }

    ctx->pc = 0x1a22e0u;

label_1a22e0:
    // 0x1a22e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a22e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a22e4:
    // 0x1a22e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a22e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a22e8:
    // 0x1a22e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a22e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a22ec:
    // 0x1a22ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a22ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a22f0:
    // 0x1a22f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a22f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a22f4:
    // 0x1a22f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a22f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a22f8:
    // 0x1a22f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a22f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a22fc:
    // 0x1a22fc: 0xc063dd4  jal         func_18F750
label_1a2300:
    if (ctx->pc == 0x1A2300u) {
        ctx->pc = 0x1A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22FCu;
        // 0x1a2300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2304u;
        goto label_1a2304;
    }
    ctx->pc = 0x1A22FCu;
    SET_GPR_U32(ctx, 31, 0x1A2304u);
    ctx->pc = 0x1A2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22FCu;
    // 0x1a2300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A22FCu, 0x1A2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2304u;
label_1a2304:
    // 0x1a2304: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a2304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a2308:
    // 0x1a2308: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1a2308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1a230c:
    // 0x1a230c: 0x10440082  beq         $v0, $a0, . + 4 + (0x82 << 2)
label_1a2310:
    if (ctx->pc == 0x1A2310u) {
        ctx->pc = 0x1A2314u;
        goto label_1a2314;
    }
    ctx->pc = 0x1A230Cu;
    {
        const bool branch_taken_0x1a230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a230c) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A2314u;
label_1a2314:
    // 0x1a2314: 0x10430080  beq         $v0, $v1, . + 4 + (0x80 << 2)
label_1a2318:
    if (ctx->pc == 0x1A2318u) {
        ctx->pc = 0x1A231Cu;
        goto label_1a231c;
    }
    ctx->pc = 0x1A2314u;
    {
        const bool branch_taken_0x1a2314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2314) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A231Cu;
label_1a231c:
    // 0x1a231c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2320:
    // 0x1a2320: 0x10430076  beq         $v0, $v1, . + 4 + (0x76 << 2)
label_1a2324:
    if (ctx->pc == 0x1A2324u) {
        ctx->pc = 0x1A2328u;
        goto label_1a2328;
    }
    ctx->pc = 0x1A2320u;
    {
        const bool branch_taken_0x1a2320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2320) {
            ctx->pc = 0x1A24FCu;
            goto label_1a24fc;
        }
    }
    ctx->pc = 0x1A2328u;
label_1a2328:
    // 0x1a2328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a232c:
    // 0x1a232c: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
label_1a2330:
    if (ctx->pc == 0x1A2330u) {
        ctx->pc = 0x1A2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A232Cu;
        // 0x1a2330: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2334u;
        goto label_1a2334;
    }
    ctx->pc = 0x1A232Cu;
    {
        const bool branch_taken_0x1a232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A232Cu;
        // 0x1a2330: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a232c) {
            ctx->pc = 0x1A2440u;
            goto label_1a2440;
        }
    }
    ctx->pc = 0x1A2334u;
label_1a2334:
    // 0x1a2334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2338:
    // 0x1a2338: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
label_1a233c:
    if (ctx->pc == 0x1A233Cu) {
        ctx->pc = 0x1A233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2338u;
        // 0x1a233c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2340u;
        goto label_1a2340;
    }
    ctx->pc = 0x1A2338u;
    {
        const bool branch_taken_0x1a2338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2338u;
        // 0x1a233c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2338) {
            ctx->pc = 0x1A23D8u;
            goto label_1a23d8;
        }
    }
    ctx->pc = 0x1A2340u;
label_1a2340:
    // 0x1a2340: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a2344:
    if (ctx->pc == 0x1A2344u) {
        ctx->pc = 0x1A2348u;
        goto label_1a2348;
    }
    ctx->pc = 0x1A2340u;
    {
        const bool branch_taken_0x1a2340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2340) {
            ctx->pc = 0x1A2350u;
            goto label_1a2350;
        }
    }
    ctx->pc = 0x1A2348u;
label_1a2348:
    // 0x1a2348: 0x10000074  b           . + 4 + (0x74 << 2)
label_1a234c:
    if (ctx->pc == 0x1A234Cu) {
        ctx->pc = 0x1A234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2348u;
        // 0x1a234c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2350u;
        goto label_1a2350;
    }
    ctx->pc = 0x1A2348u;
    {
        const bool branch_taken_0x1a2348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2348u;
        // 0x1a234c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2348) {
            ctx->pc = 0x1A251Cu;
            goto label_1a251c;
        }
    }
    ctx->pc = 0x1A2350u;
label_1a2350:
    // 0x1a2350: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a2354:
    // 0x1a2354: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a2354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2358:
    // 0x1a2358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a235c:
    // 0x1a235c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1a235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1a2360:
    // 0x1a2360: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a2360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a2364:
    // 0x1a2364: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2368:
    // 0x1a2368: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1a236c:
    if (ctx->pc == 0x1A236Cu) {
        ctx->pc = 0x1A2370u;
        goto label_1a2370;
    }
    ctx->pc = 0x1A2368u;
    {
        const bool branch_taken_0x1a2368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a2368) {
            ctx->pc = 0x1A2388u;
            goto label_1a2388;
        }
    }
    ctx->pc = 0x1A2370u;
label_1a2370:
    // 0x1a2370: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1a2374:
    // 0x1a2374: 0x2463821  addu        $a3, $s2, $a2
    ctx->pc = 0x1a2374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_1a2378:
    // 0x1a2378: 0xace20674  sw          $v0, 0x674($a3)
    ctx->pc = 0x1a2378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1652), GPR_U32(ctx, 2));
label_1a237c:
    // 0x1a237c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1a237cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_1a2380:
    // 0x1a2380: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a2384:
    if (ctx->pc == 0x1A2384u) {
        ctx->pc = 0x1A2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2380u;
        // 0x1a2384: 0xace00774  sw          $zero, 0x774($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2388u;
        goto label_1a2388;
    }
    ctx->pc = 0x1A2380u;
    {
        const bool branch_taken_0x1a2380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2380u;
        // 0x1a2384: 0xace00774  sw          $zero, 0x774($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2380) {
            ctx->pc = 0x1A2390u;
            goto label_1a2390;
        }
    }
    ctx->pc = 0x1A2388u;
label_1a2388:
    // 0x1a2388: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a238c:
    if (ctx->pc == 0x1A238Cu) {
        ctx->pc = 0x1A238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2388u;
        // 0x1a238c: 0xae440670  sw          $a0, 0x670($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2390u;
        goto label_1a2390;
    }
    ctx->pc = 0x1A2388u;
    {
        const bool branch_taken_0x1a2388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2388u;
        // 0x1a238c: 0xae440670  sw          $a0, 0x670($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2388) {
            ctx->pc = 0x1A23A0u;
            goto label_1a23a0;
        }
    }
    ctx->pc = 0x1A2390u;
label_1a2390:
    // 0x1a2390: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a2394:
    // 0x1a2394: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x1a2394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
label_1a2398:
    // 0x1a2398: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1a239c:
    if (ctx->pc == 0x1A239Cu) {
        ctx->pc = 0x1A239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2398u;
        // 0x1a239c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A23A0u;
        goto label_1a23a0;
    }
    ctx->pc = 0x1A2398u;
    {
        const bool branch_taken_0x1a2398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2398u;
        // 0x1a239c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2398) {
            ctx->pc = 0x1A2364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2364;
        }
    }
    ctx->pc = 0x1A23A0u;
label_1a23a0:
    // 0x1a23a0: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1a23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a23a4:
    // 0x1a23a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a23a8:
    if (ctx->pc == 0x1A23A8u) {
        ctx->pc = 0x1A23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23A4u;
        // 0x1a23a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A23ACu;
        goto label_1a23ac;
    }
    ctx->pc = 0x1A23A4u;
    {
        const bool branch_taken_0x1a23a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23A4u;
        // 0x1a23a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23a4) {
            ctx->pc = 0x1A23C4u;
            goto label_1a23c4;
        }
    }
    ctx->pc = 0x1A23ACu;
label_1a23ac:
    // 0x1a23ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a23b0:
    // 0x1a23b0: 0xc063e08  jal         func_18F820
label_1a23b4:
    if (ctx->pc == 0x1A23B4u) {
        ctx->pc = 0x1A23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23B0u;
        // 0x1a23b4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A23B8u;
        goto label_1a23b8;
    }
    ctx->pc = 0x1A23B0u;
    SET_GPR_U32(ctx, 31, 0x1A23B8u);
    ctx->pc = 0x1A23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23B0u;
    // 0x1a23b4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A23B0u, 0x1A23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23B8u;
label_1a23b8:
    // 0x1a23b8: 0x10000057  b           . + 4 + (0x57 << 2)
label_1a23bc:
    if (ctx->pc == 0x1A23BCu) {
        ctx->pc = 0x1A23C0u;
        goto label_1a23c0;
    }
    ctx->pc = 0x1A23B8u;
    {
        const bool branch_taken_0x1a23b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23b8) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A23C0u;
label_1a23c0:
    // 0x1a23c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a23c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a23c4:
    // 0x1a23c4: 0xc063e14  jal         func_18F850
label_1a23c8:
    if (ctx->pc == 0x1A23C8u) {
        ctx->pc = 0x1A23CCu;
        goto label_1a23cc;
    }
    ctx->pc = 0x1A23C4u;
    SET_GPR_U32(ctx, 31, 0x1A23CCu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A23C4u, 0x1A23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23CCu;
label_1a23cc:
    // 0x1a23cc: 0x10000052  b           . + 4 + (0x52 << 2)
label_1a23d0:
    if (ctx->pc == 0x1A23D0u) {
        ctx->pc = 0x1A23D4u;
        goto label_1a23d4;
    }
    ctx->pc = 0x1A23CCu;
    {
        const bool branch_taken_0x1a23cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23cc) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A23D4u;
label_1a23d4:
    // 0x1a23d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a23d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a23d8:
    // 0x1a23d8: 0xc064ffc  jal         func_193FF0
label_1a23dc:
    if (ctx->pc == 0x1A23DCu) {
        ctx->pc = 0x1A23E0u;
        goto label_1a23e0;
    }
    ctx->pc = 0x1A23D8u;
    SET_GPR_U32(ctx, 31, 0x1A23E0u);
    ctx->pc = 0x193FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FF0u, 0x1A23D8u, 0x1A23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23E0u;
label_1a23e0:
    // 0x1a23e0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a23e4:
    if (ctx->pc == 0x1A23E4u) {
        ctx->pc = 0x1A23E8u;
        goto label_1a23e8;
    }
    ctx->pc = 0x1A23E0u;
    {
        const bool branch_taken_0x1a23e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23e0) {
            ctx->pc = 0x1A2434u;
            goto label_1a2434;
        }
    }
    ctx->pc = 0x1A23E8u;
label_1a23e8:
    // 0x1a23e8: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x1a23e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
label_1a23ec:
    // 0x1a23ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a23f0:
    // 0x1a23f0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_1a23f4:
    if (ctx->pc == 0x1A23F4u) {
        ctx->pc = 0x1A23F8u;
        goto label_1a23f8;
    }
    ctx->pc = 0x1A23F0u;
    {
        const bool branch_taken_0x1a23f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a23f0) {
            ctx->pc = 0x1A2434u;
            goto label_1a2434;
        }
    }
    ctx->pc = 0x1A23F8u;
label_1a23f8:
    // 0x1a23f8: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x1a23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
label_1a23fc:
    // 0x1a23fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2400:
    // 0x1a2400: 0xae430324  sw          $v1, 0x324($s2)
    ctx->pc = 0x1a2400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 3));
label_1a2404:
    // 0x1a2404: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a2404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a2408:
    // 0x1a2408: 0x8e440324  lw          $a0, 0x324($s2)
    ctx->pc = 0x1a2408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
label_1a240c:
    // 0x1a240c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x1a240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a2410:
    // 0x1a2410: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a2410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a2414:
    // 0x1a2414: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_1a2418:
    if (ctx->pc == 0x1A2418u) {
        ctx->pc = 0x1A241Cu;
        goto label_1a241c;
    }
    ctx->pc = 0x1A2414u;
    {
        const bool branch_taken_0x1a2414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2414) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A241Cu;
label_1a241c:
    // 0x1a241c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2420:
    // 0x1a2420: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a2424:
    // 0x1a2424: 0xc063e08  jal         func_18F820
label_1a2428:
    if (ctx->pc == 0x1A2428u) {
        ctx->pc = 0x1A2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2424u;
        // 0x1a2428: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A242Cu;
        goto label_1a242c;
    }
    ctx->pc = 0x1A2424u;
    SET_GPR_U32(ctx, 31, 0x1A242Cu);
    ctx->pc = 0x1A2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2424u;
    // 0x1a2428: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A2424u, 0x1A242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A242Cu;
label_1a242c:
    // 0x1a242c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1a2430:
    if (ctx->pc == 0x1A2430u) {
        ctx->pc = 0x1A2434u;
        goto label_1a2434;
    }
    ctx->pc = 0x1A242Cu;
    {
        const bool branch_taken_0x1a242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a242c) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A2434u;
label_1a2434:
    // 0x1a2434: 0x10000038  b           . + 4 + (0x38 << 2)
label_1a2438:
    if (ctx->pc == 0x1A2438u) {
        ctx->pc = 0x1A2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2434u;
        // 0x1a2438: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A243Cu;
        goto label_1a243c;
    }
    ctx->pc = 0x1A2434u;
    {
        const bool branch_taken_0x1a2434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2434u;
        // 0x1a2438: 0xae400324  sw          $zero, 0x324($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2434) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A243Cu;
label_1a243c:
    // 0x1a243c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a243cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2440:
    // 0x1a2440: 0xc0802aa  jal         func_200AA8
label_1a2444:
    if (ctx->pc == 0x1A2444u) {
        ctx->pc = 0x1A2448u;
        goto label_1a2448;
    }
    ctx->pc = 0x1A2440u;
    SET_GPR_U32(ctx, 31, 0x1A2448u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1A2440u, 0x1A2448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2448u;
label_1a2448:
    // 0x1a2448: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1a2448u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_1a244c:
    // 0x1a244c: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1a244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a2450:
    // 0x1a2450: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2450u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a2454:
    // 0x1a2454: 0x0  nop
    ctx->pc = 0x1a2454u;
    // NOP
label_1a2458:
    // 0x1a2458: 0x0  nop
    ctx->pc = 0x1a2458u;
    // NOP
label_1a245c:
    // 0x1a245c: 0x2010  mfhi        $a0
    ctx->pc = 0x1a245cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1a2460:
    // 0x1a2460: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a2464:
    if (ctx->pc == 0x1A2464u) {
        ctx->pc = 0x1A2468u;
        goto label_1a2468;
    }
    ctx->pc = 0x1A2460u;
    {
        const bool branch_taken_0x1a2460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2460) {
            ctx->pc = 0x1A24C0u;
            goto label_1a24c0;
        }
    }
    ctx->pc = 0x1A2468u;
label_1a2468:
    // 0x1a2468: 0x8e430670  lw          $v1, 0x670($s2)
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a246c:
    // 0x1a246c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a246cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a2470:
    // 0x1a2470: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1a2470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a2474:
    // 0x1a2474: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a2478:
    if (ctx->pc == 0x1A2478u) {
        ctx->pc = 0x1A247Cu;
        goto label_1a247c;
    }
    ctx->pc = 0x1A2474u;
    {
        const bool branch_taken_0x1a2474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2474) {
            ctx->pc = 0x1A2480u;
            goto label_1a2480;
        }
    }
    ctx->pc = 0x1A247Cu;
label_1a247c:
    // 0x1a247c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a247cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2480:
    // 0x1a2480: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a2480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a2484:
    // 0x1a2484: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a2484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a2488:
    // 0x1a2488: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1a248c:
    if (ctx->pc == 0x1A248Cu) {
        ctx->pc = 0x1A2490u;
        goto label_1a2490;
    }
    ctx->pc = 0x1A2488u;
    {
        const bool branch_taken_0x1a2488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2488) {
            ctx->pc = 0x1A24C0u;
            goto label_1a24c0;
        }
    }
    ctx->pc = 0x1A2490u;
label_1a2490:
    // 0x1a2490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2494:
    // 0x1a2494: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2498:
    if (ctx->pc == 0x1A2498u) {
        ctx->pc = 0x1A2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2494u;
        // 0x1a2498: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A249Cu;
        goto label_1a249c;
    }
    ctx->pc = 0x1A2494u;
    {
        const bool branch_taken_0x1a2494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2494u;
        // 0x1a2498: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2494) {
            ctx->pc = 0x1A24B0u;
            goto label_1a24b0;
        }
    }
    ctx->pc = 0x1A249Cu;
label_1a249c:
    // 0x1a249c: 0x0  nop
    ctx->pc = 0x1a249cu;
    // NOP
label_1a24a0:
    // 0x1a24a0: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1a24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1a24a4:
    // 0x1a24a4: 0xac400774  sw          $zero, 0x774($v0)
    ctx->pc = 0x1a24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1908), GPR_U32(ctx, 0));
label_1a24a8:
    // 0x1a24a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1a24ac:
    // 0x1a24ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a24acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a24b0:
    // 0x1a24b0: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1a24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a24b4:
    // 0x1a24b4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a24b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a24b8:
    // 0x1a24b8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1a24bc:
    if (ctx->pc == 0x1A24BCu) {
        ctx->pc = 0x1A24C0u;
        goto label_1a24c0;
    }
    ctx->pc = 0x1A24B8u;
    {
        const bool branch_taken_0x1a24b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a24b8) {
            ctx->pc = 0x1A249Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a249c;
        }
    }
    ctx->pc = 0x1A24C0u;
label_1a24c0:
    // 0x1a24c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a24c4:
    // 0x1a24c4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1a24c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a24c8:
    // 0x1a24c8: 0x8c620774  lw          $v0, 0x774($v1)
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1908)));
label_1a24cc:
    // 0x1a24cc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1a24d0:
    if (ctx->pc == 0x1A24D0u) {
        ctx->pc = 0x1A24D4u;
        goto label_1a24d4;
    }
    ctx->pc = 0x1A24CCu;
    {
        const bool branch_taken_0x1a24cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a24cc) {
            ctx->pc = 0x1A2468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2468;
        }
    }
    ctx->pc = 0x1A24D4u;
label_1a24d4:
    // 0x1a24d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a24d8:
    // 0x1a24d8: 0xac620774  sw          $v0, 0x774($v1)
    ctx->pc = 0x1a24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1908), GPR_U32(ctx, 2));
label_1a24dc:
    // 0x1a24dc: 0x8c650674  lw          $a1, 0x674($v1)
    ctx->pc = 0x1a24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_1a24e0:
    // 0x1a24e0: 0xc064fb8  jal         func_193EE0
label_1a24e4:
    if (ctx->pc == 0x1A24E4u) {
        ctx->pc = 0x1A24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24E0u;
        // 0x1a24e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24E8u;
        goto label_1a24e8;
    }
    ctx->pc = 0x1A24E0u;
    SET_GPR_U32(ctx, 31, 0x1A24E8u);
    ctx->pc = 0x1A24E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24E0u;
    // 0x1a24e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A24E0u, 0x1A24E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24E8u;
label_1a24e8:
    // 0x1a24e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a24e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a24ec:
    // 0x1a24ec: 0xc063e08  jal         func_18F820
label_1a24f0:
    if (ctx->pc == 0x1A24F0u) {
        ctx->pc = 0x1A24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24ECu;
        // 0x1a24f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A24F4u;
        goto label_1a24f4;
    }
    ctx->pc = 0x1A24ECu;
    SET_GPR_U32(ctx, 31, 0x1A24F4u);
    ctx->pc = 0x1A24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24ECu;
    // 0x1a24f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A24ECu, 0x1A24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24F4u;
label_1a24f4:
    // 0x1a24f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a24f8:
    if (ctx->pc == 0x1A24F8u) {
        ctx->pc = 0x1A24FCu;
        goto label_1a24fc;
    }
    ctx->pc = 0x1A24F4u;
    {
        const bool branch_taken_0x1a24f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24f4) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A24FCu;
label_1a24fc:
    // 0x1a24fc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a2500:
    if (ctx->pc == 0x1A2500u) {
        ctx->pc = 0x1A2504u;
        goto label_1a2504;
    }
    ctx->pc = 0x1A24FCu;
    {
        const bool branch_taken_0x1a24fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24fc) {
            ctx->pc = 0x1A2518u;
            goto label_1a2518;
        }
    }
    ctx->pc = 0x1A2504u;
label_1a2504:
    // 0x1a2504: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a2504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a2508:
    // 0x1a2508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a250c:
    // 0x1a250c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a250cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a2510:
    // 0x1a2510: 0x320f809  jalr        $t9
label_1a2514:
    if (ctx->pc == 0x1A2514u) {
        ctx->pc = 0x1A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2510u;
        // 0x1a2514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2518u;
        goto label_1a2518;
    }
    ctx->pc = 0x1A2510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2518u);
        ctx->pc = 0x1A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2510u;
        // 0x1a2514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2510u, 0x1A2518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2518u;
label_1a2518:
    // 0x1a2518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a2518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a251c:
    // 0x1a251c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a251cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2520:
    // 0x1a2520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2524:
    // 0x1a2524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2528:
    // 0x1a2528: 0x3e00008  jr          $ra
label_1a252c:
    if (ctx->pc == 0x1A252Cu) {
        ctx->pc = 0x1A252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2528u;
        // 0x1a252c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2530u;
        goto label_fallthrough_0x1a2528;
    }
    ctx->pc = 0x1A2528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2528u;
        // 0x1a252c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2528:
    ctx->pc = 0x1A2530u;
}
